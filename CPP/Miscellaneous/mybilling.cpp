#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>

class Item
{
int icode;
char iname[20];
float price;
public:
void input(int i);
void display_one(void);
void  display_all(void);
int get_icode(void) { return icode; }
char *get_iname(void) {return iname;}
int get_price(void) { return price;}
void modify(void);
};

void Item::input(int i)
{
	cout<< "\nEnter Item Name : "; gets(iname);
	cout<< "\nEnter Price of the item : "; cin>> price;
	icode=i;
}

void Item::display_one(void)
{
	cout<< "\nITEM CODE : "; cout<<icode;
	cout<< "\nITEM NAME : "; cout<<iname;
	cout<< "\nITERM PRICE  : "; cout<< price;
}

void Item::display_all(void)
{
	cout<<endl<<icode<< "\t"<<iname<< "\t\t\t" << price;
}

void Item::modify(void)
{
char op='y';
intch;
while(op=='y' || op=='Y') {
cout<< "\n\nModification Item";
cout<< "\n1. Change name";
cout<< "\n2. Change price";
cout<< "\nEnter your option ? (1-2) ";
cin>>ch;
switch(ch)
      {
	case 1: cout<< "\nOld name : " <<iname;
		cout<< "\nEnter the new name : "; gets(iname);
		break;
	case 2: cout<< "\nOld Price : " << price;
		cout<< "\nEnter new price : "; cin>> price;
		break;
      }
cout<< "\nDo you want to change any other information ? (y/n) : ";
cin>> op;
   }
}

struct date
{
int d;
int m;
int y;
};
class Customer
{
intcno;
struct date p_date;
charcname[30];
charcaddress[30];
public:
void input(int c);
voiddisplay_one(void);
voiddisplay_all(void);
intget_cno(void) { return cno; }
void modify(void);
void bill(void);
};

void Customer::bill(void)
{
gotoxy(25,5);cout<<"SPENCER";
gotoxy(18,6);cout<<"GARIAHAT,KOLKATA";
gotoxy(18,7);cout<< "------------------------";
display_one();
cout<<endl<< "======================================================";
}



void Customer::input(int c)
{
	cout<< "\nEnter the following customer details:-\n";
	cout<< "\nEnter customer name "; gets(cname);
	cout<< "\nEnter address:  "; gets(caddress);
cout<< "\nEnter purchase date :(dd/mm/yy)";
cin>>p_date.d>>p_date.m>>p_date.y;
	cno=c;

}

void Customer::display_one(void)
{
cout<< "\nCustomer no : "<<cno;
cout<< "\nCustomer name : " <<cname;
cout<< "\nAddress : " <<caddress;
cout<< "\nPurchase Date : "<<p_date.d<< "/" <<p_date.m<< "/"<<p_date.y;
}

void Customer::display_all(void)
{
cout<<endl<<cno<< "\t" <<cname<< "\t\t\t"<<caddress<< "\t\t\t"<<p_date.d<< "/"
<<p_date.m<< "/"<<p_date.y;
}

void Customer::modify(void)
{
char op='y';
intch;
while(op=='y' || op=='Y') {
cout<< "\n\nModification Item";
cout<< "\n1. Change customer name";
cout<< "\n2. Change address";
cout<< "\nEnter your option ? (1-2) ";
cin>>ch;
switch(ch)
     {
	case 1: cout<< "\nOld customer name : " <<cname;
		cout<< "\nEnter the new name : "; gets(cname);
		break;
	case 2: cout<< "\nOld Address  : " <<caddress;
		cout<< "\nEnter new option-1 : "; gets(caddress);
		break;
      }
cout<< "\nDo you want to change any other information ? (y/n) : ";
cin>> op;
   }
}


void main()
{
clrscr();
int op,flag,choice,c,icode1,cno1;long pos; Customer C; Item I; char pass[8],ch='Y';
ifstream f3,fin,f1;
ofstream f2,fout;
fstream f;
voidentry_screen(void);
void validity(void);
entry_screen();
validity();
cout<< "\nBILL GENERATION SYSTEM\n";
while(ch=='Y' || ch=='y') {
clrscr();
gotoxy(37,2);cout<< "MAIN MENU";
gotoxy(25,4);cout<< "1. Entry of new item details";
gotoxy(25,6);cout<< "2. Modification of item details";
gotoxy(25,8);cout<< "3. Removal of item";
gotoxy(25,10);cout<< "4. Entry of new customer";
gotoxy(25,12);cout<< "5. Modification of customer details";
gotoxy(25,14);cout<< "6. Removal of customer";
gotoxy(25,16);cout<< "7. Display of details of specific item";
gotoxy(25,18);cout<< "8. Display of details of all items";
gotoxy(25,20);cout<< "9. Display of details of specific customer";
gotoxy(25,22);cout<< "10. Display of details of all customers";
gotoxy(25,24);cout<< "11. Generation of Bill";
gotoxy(25,26);cout<< "12. Exit.........";
gotoxy(25,28);cout<< "Enter your option : "; cin>> op;
switch(op)
     {
case 1: clrscr();
	flag=1;
	fin.open("item.dat",ios::binary | ios::in);
	cout<< "\nEnter the item code :";
	cin>> icode1;
	if(fin) {
		while(!fin.eof()) {
		fin.read((char *)&I,sizeof(I));
		if(fin.eof()) break;
		if(icode1==I.get_icode()){
		cout<< "\nAlready exist ........";
		flag=0;
		break;
		    }
		  }
		fin.close();
		}
		if(flag!=0) {
		fout.open("item.dat",ios::binary | ios::app);
		I.input(icode1);
		fout.write((char *)&I,sizeof(I));
		fout.close();
		}
		break;
case 2:  clrscr();
		f.open("item.dat",ios::binary | ios::in | ios::out);
		cout<< "\nEnter Item code whose data to be changed : ";
		cin>> icode1;
		while(1) {
		pos=f.tellg();
		f.read((char *)&I,sizeof(I));
		if(f.eof()) break;
		if(I.get_icode()==icode1) {
		clrscr();
		   I.display_one();
		I.modify();
		f.seekp(pos);
		f.write((char *)&I,sizeof(I));
		flag=1;
		 }
	       }
	if(flag==0) cout<< "Invalid Item Code..........";
	f.close();
	break;
case 3: clrscr();
	ch='n';
	cout<< "\nEnter the Item Code to be removed : "; cin>> icode1;
	f1.open("item.dat",ios::binary | ios::in);
	f2.open("temp.dat",ios::binary | ios::out);
	while(1) {
		flag=0;
		f1.read((char *)&I,sizeof(I));
		if(f1.eof()) break;
		if(I.get_icode()==icode1) {
		clrscr();
		I.display_one();
		cout<< "\n\nAre you sure? (Y/N) : ";
		cin>>ch;
		if(ch=='Y' || ch=='y') flag=1;
		 }
		if(flag==0) f2.write((char *)&I,sizeof(I));
	       }
	f1.close(); f2.close();
	remove("item.dat");
	rename("temp.dat","item.dat");
	break;
case 4:  clrscr();
	fin.open("cust.dat",ios::binary | ios::in);
	flag=1;
	cout<< "\nEnter the customer code : ";
	cin>> cno1;
	if(fin) {
		while(!fin.eof()) {
		fin.read((char *)&C,sizeof(C));
		if(fin.eof()) break;
		if(cno1==C.get_cno()) {
		flag=0;
		cout<< "\nCust No. already exist......";
		break;
		   }
		 }
		fin.close();
	       }
	if(flag!=0) {
		fout.open("cust.dat",ios::binary | ios::app);
		C.input(cno1);
		fout.write((char *)&C,sizeof(C));
		fout.close();
	       }
	break;
case 5: clrscr();
	int cno1;
	f.open("cust.dat",ios::binary | ios::in | ios::out);
	cout<< "\nEnter Customer No. whose data to be changed : ";
	cin>> cno1;
	while(1) {
		pos=f.tellg();
		f.read((char *)&C,sizeof(C));
		if(f.eof()) break;
		if(C.get_cno()==cno1) {
		clrscr();
		C.display_one();
		C.modify();
		f.seekp(pos);
		f.write((char *)&C,sizeof(C));
		flag=1;
		 }
	       }
	if(flag==0) cout<< "Invalid Customer No...........";
	f.close();
	break;
case 6: clrscr();
	ch='n';
	cout<< "\nEnter the Cusomer No. to be removed : "; cin>> cno1;
	f1.open("cust.dat",ios::binary | ios::in);
	f2.open("temp.dat",ios::binary | ios::out);
	while(1) {
		flag=0;
		f1.read((char *)&C,sizeof(C));
		if(f1.eof()) break;
		if(C.get_cno()==cno1) {
		clrscr();
		C.display_one();
		cout<< "\n\nAre you sure to remove ? (Y/N) : ";
		cin>>ch;
		if(ch=='Y' || ch=='y') flag=1;
		  }
		if(flag==0) f2.write((char *)&C,sizeof(C));
	       }
	f1.close(); f2.close();
	remove("cust.dat");
	rename("temp.dat","cust.dat");
	break;
case 7: clrscr();
	flag=0;
	fin.open("item.dat",ios::binary | ios::in);
	cout<< "\nEnter Item Code whose details to be displayed : ";
	cin>> icode1;
	while(1) {
		fin.read((char *)&I,sizeof(I));
		if(fin.eof()) break;
		if(I.get_icode()==icode1) {
		clrscr();
		cout<< "Item Details\n";
		I.display_one();
		flag=1;
		break;
		 }
	       }
	if(flag==0) cout<< "\nInvalid Item Code .......";
	fin.close();
	break;
case 8: clrscr();
	fin.open("item.dat",ios::binary | ios::in);
	cout<< "All Item details\n";
	cout<< "I-Code" << "\t"<< "I-Name"<<"\t\t\t"<< "Price";
	while(1) {
		fin.read((char *)&I,sizeof(I));
		if(fin.eof()) break;
		I.display_all();
	       }
	fin.close();
	break;
case 9: clrscr();
	flag=0;
	f1.open("cust.dat",ios::binary | ios::in);
	cout<< "\nEnterCust Code whose details to be displayed : ";
	cin>> cno1;
	while(1) {
		f1.read((char *)&C,sizeof(C));
		if(f1.eof()) break;
		if(C.get_cno()==cno1) {
		clrscr();
		cout<< "Customer Details\n";
		C.display_one();
		flag=1;
		break;
		 }
	       }
	if(flag==0) cout<< "\nInvalid Customer Code .......";
	f1.close();
	break;
case 10: clrscr();
	f1.open("cust.dat",ios::binary | ios::in);
	cout<< "All Customer details\n";
	cout<< "C-No" << "\t"<< "C-Name"<<"\t\t\t"<< "Address"<< "\t\t\t"
	<<"Purchase Date"<<endl;
	while(1) {
		f1.read((char *)&C,sizeof(C));
		if(f1.eof()) break;
		C.display_all();
	       }
	f1.close();
	break;
case 11: clrscr();
	cout<< "\nEnter customer no. : ";cin>> cno1;
	f1.open("cust.dat",ios::binary | ios::in);
	while(1) {
		flag=1;
		f1.read((char *)&C,sizeof(C));
		if(f1.eof()) break;
		if(C.get_cno()==cno1) {
		intic[10],i=0,q[10];float t[10],tot=0;char p;
		while(1) {
			cout<< "Enter item code : ";
			cin>>ic[i];
			cout<< "\nEnter quantity : ";
			cin>> q[i];
			i++;
			cout<< "\nDo U have another item (y/n) : "; cin>> p;
			if(p=='N' || p=='n') break;
		      }
		clrscr();
		C.bill();
		cout<<endl<<"ICode\t"<<"I-Name        \t\t"<<"Price\t"<<"Qty\t"<< "Total";
		for(int k=0;k<i;k++) {
			f3.open("item.dat",ios::binary | ios::in);
			while(1) {
			f3.read((char *)&I,sizeof(I));
			if(f3.eof()) break;
			if(I.get_icode()==ic[k]) {
			t[k]=I.get_price()*q[k];
			tot+=t[k];
cout<<endl<<ic[k] << "\t" <<I.get_iname() << "\t\t"<<I.get_price()<< "\t"<<q[k]<< "\t"<<t[k];
			break;
			    }
			 }
			f3.close();
		      }
		cout<<endl<<"------------------------------------------------------";
		cout<< "\nG.Total (Total + VAT) : Rs. "<< (tot+.06*tot)<< "/-";
		cout<< "\n\n\nThank you. We are at your service always....";
		f2.close();
		  }
		break;
	       }
	if(flag==0) cout<< "\nInvalid customer no.......";
	break;
case 12:  clrscr();gotoxy(30,11);cout<< "Thank you for using me!!!!!";
	getch();exit(1);
    }
cout<< "\n\n\n\nDo you want to continue (Y/N) ? ";
cin>>ch; clrscr();
  }
}

voidentry_screen(void)
{
int i;
gotoxy(25,10);for(i=1;i<=20;i++) cout<< "*-";
gotoxy(32,11);cout<< "BILL GENERATION SYSTEM\n";
gotoxy(31,12);cout<< "Designed by MOHIT AGARWALA\n";
gotoxy(38,13);cout<< "Session 2013-14\n";
gotoxy(25,14);for(i=1;i<=20;i++) cout<< "*-";
getch();
clrscr();
}

void validity(void)
{
char pass1[7],a;int i;
gotoxy(25,10);for(i=1;i<=20;i++) cout<< "*-";
gotoxy(32,11);cout<< "CHECK FOR AUTHENTICATION";
gotoxy(32,12);cout<< "Userid : admn";
gotoxy(25,14);for(i=1;i<=20;i++) cout<< "*-";
gotoxy(32,13);cout<< "Enter your password:";
for(i=0;i<6;i++) {
    a=getch();
pass1[i]=a;
   }
pass1[i]='\0';
if(strcmp(pass1,"janina496") !=0) {
gotoxy(37,17);cout<< "\n\nSorry incorrect password......";
getch();
exit(1);
   }
clrscr();
}

