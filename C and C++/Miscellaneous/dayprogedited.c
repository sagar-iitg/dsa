#include<stdio.h>
#define IS_LEAP_YEAR(Y)  (((Y%4 == 0)&&(Y%100 != 0))||(Y% 400 == 0))
int validateInput(int,int,int);
 
char dayStrings[7][10]={"Sunday","Monday",
                        "Tuesday","Wednesday",
                        "Thursday","Friday","Saturday"};
int daysInMonth[12]={31,28,31,30,31,
                                 30,31,31,30,31,30,31};
char monthStrings[20][20]={"JANUARY","FEBRUARY","MARCH",
						  "APRIL","MAY","JUNE","JULY",
						  "AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};

 
int main()
{
 
    int day,month,year,OrdinaryYears,TOddDays,i,Tdays=0;
    int CYears,odd_leftYears,OddDays,leapYears;
 
    printf("Enter the Day(1-31):");
    scanf("%u",&day);
    printf("\nEnter the Month(1-12):");
    scanf("%u",&month);
    printf("\nEnter the Year:");
    scanf("%04u",&year);
    printf("\n\nInputDate : %02u/%02u/%04u",day,month,year);
    if(0 == validateInput(day,month,year))
            return 1;
    CYears = year-1;
    odd_leftYears = CYears%400;
    leapYears = (odd_leftYears/4)-(odd_leftYears/100)+(odd_leftYears/400);
    OrdinaryYears = odd_leftYears - leapYears;
    TOddDays = leapYears*2 + OrdinaryYears*1;
    OddDays += TOddDays%7;
    for(i=0;i<month-1;i++)
    {
        Tdays += daysInMonth[i];
    }
    Tdays += day;
    OddDays = (OddDays + Tdays)%7;
    printf("\nOutput is:%s,%s %u,%u.\n",dayStrings[OddDays],monthStrings[month-1],day,year);
    return(0);
  }
 

int validateInput(int day,int month,int year)
{
    
    if(month>12)
    {
        printf("\n\nIncorrect Month");
        return 0;
    }
 

    if(2 == month)
    {
      if(IS_LEAP_YEAR(year))
        
		{    daysInMonth[1]+=1;
        }
    }

    if(day>daysInMonth[month-1])
    {
        printf("\n\nIncorrect no of days for the given Month");
        return 0;
    }
    return 1;
}
