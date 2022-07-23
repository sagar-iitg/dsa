#include<iostream>
using namespace std;
int a[1000];
int count = 0;


class ADT{

private:

public:
        int f;
     int r;
      ADT()
      {

      f= -1;
      r = -1;

      }

    void add(int e)
    {

      if(f==-1)
      {
      a[++f]=e;
      r++;
 count++;
      }
      else
      {

      a[++r] = e;
   count++;

      }


    }

    int del()
    {
    if(f==-1)
    cout<<"\nempty adt ";
    else
    if(f>r)
    cout<<"\nempty adt";
else
     if(count <5)
     {
     count--;
     return a[r--];

     }
     else
       {
       count--;
       return a[f++];

             }

}

void display()
{

 for(int i = f ;i<=r;i++)
 {


 cout<<"\n\t"<<a[i];

 }



}

};

int main()
{


ADT q;



cout<<" 1. create new adt \n";
cout<<" 2. add an element \n";
cout<<" 3. delete an element  \n";
cout<<" 4. display \n";
cout<<" 5. exit \n";
int c; cin>>c;
do{


switch(c)
{
  case 1:  break;
   case 2:
          cout<<"enter the element \n";
          int e;cin>>e;
          q.add(e);
          break;

    case 3: cout<<q.del(); break;

    case 4: q.display(); break;


}
cout<<"Enter your choice \n";
 cin>>c;
 }while(c!=5);



return 0;
}
