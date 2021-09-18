
#include<stdio.h>
#include<string.h>
/*prints a single digit in word */
int print1(int low);
 
/*prints two digit numbers */
int print2(int low,int high);
 
/*This prints numbers from 20 to 99 i.e two digits >= 20 */
void print_20_99(char str[],int low,int high);
 
/*prints three digit numbers*/
void print3(int low,int high);
 
/*displays the number in words */
void show(int ,int );
 
/*checks for valid numeric string*/
int validate(void);
 
char number[100];
char digits[10][10] = {" One "," Two "," Three "," Four "," Five ",
					" Six "," Seven "," Eight "," Nine "};
char all_ens[10][10] = { " ten "," eleven ","twelve","thirteen","fourteen"
					," fifteen ", " sixteen ","seventeen","eighteen","nineteen" };
 
char all_tys[8][10] = { "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
 
int main()
{
    int i,len;
 
    puts("Enter the number :");
    gets(number);
     printf("\n");
    if(validate()<0)
       printf("\n wrong number entered\n");
    else
    {
        len=strlen(number)-1;
 
        /* truncates the zeros
         * present on left side */
        for(i=0;i<=len;i++)
           if(number[i]!='0'){
                show(i,len);
           break;
        }
    }
    return 0;
}/* end of main*/
 
void show(int low,int high)
{
    int len;
    len=high-low+1;
    if(len>7)
    {
        printf("(");
        show(low,high - 7);
        printf(")");
        printf(" Crore ");
        show(high-7+1,high);
    }
    else{
        switch(len)
       {
        case 1:
               print1(low);
               break;
        case 2:
               print2(low,high);
               break;
        case 3:
               print3(low,high);
               break;
        case 4 :
                if(print1(low))
                printf(" Thousand ");
                print3(low+1,high);
                break;
        case 5:
                if(print2(low,low+1))
                  printf(" Thousand ");
                print3(low+2,high);
                break;
        case 6:
                if(print1(low))
                  printf(" Lakh ");
                if(print2(low+1,low+2))
                  printf(" Thousand ");
                print3(low+3,high);
                break;
        case 7:
                if(print2(low,low+1))
                  printf(" Lakh ");
                if(print2(low+2,low+3))
                  printf(" Thousand ");
                print3(low+4,high);
                break;
        default:
                break;
    }
  }
}/* end of show()*/
 
int print1(int low)
{
    if(number[low] == '0')
        return 0;
    printf(digits[number[low]-48]);
    return 1;
}/*end of print1()*/
 
int print2(int low, int high)
{
    switch(number[low])
    {
    case '0':
             if(print1(high))
                break;
             else
                return 0;
    case '1':
                printf(all_ens[number[high] - 48]);
                break;
    default:
                /* this portion used for printing numbers
                 * from 20 to 99 i.e number[low] has value '2' -to- '9'*/
               print_20_99(all_tys[number[low] - 48-2],low,high); /* all_tys[] stores twenty in 0th loc */
               break;
     }
     return 1;
}/* end of print2()*/
 
void print3(int  low,int high)
{
        if(print1(low))
           printf("Hundred");
        print2(low+1,high);
}
 
void print_20_99(char str[],int low,int high)
{
    if(number[low]=='0')
                     printf(" %s ",str);
               else{
                  printf(" %s ",str);
                  if(number[high]!='0')
                  print1(high);
               }
}/*end of print_20_99()*/
 
int  validate(void)
{
    char *ptr = number;
 
    while(*ptr)
    {
        if(!((*ptr >='0')&&(*ptr <='9')))
            return -1;
        ptr++;
    }
    return 1;
}
