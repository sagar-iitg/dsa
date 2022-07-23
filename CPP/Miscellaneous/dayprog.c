#include<stdio.h>
#define IS_LEAP_YEAR(Y)  (((Y%4 == 0)&&(Y%100 != 0))||(Y% 400 == 0))
#define ODD_DAYS_LEAP_YEAR 2
#define ODD_DAYS_ORDINARY_YEAR 1
 
int validateInput(int,int,int);
 
char dayStrings[7][10]={"Sunday","Monday",
                        "Tuesday","Wednesday",
                        "Thursday","Friday","Saturday"};
int daysInMonth[12]={31,28,31,30,31,
                                 30,31,31,30,31,30,31};
 
/*it stores the odd days for 100,200,300 years odd days
 *i.e 5,3,1 odd days resp. */
int yearMap[4]={0,5,3,1};
 
int main()
{
 
    int day,month,year,OrdinaryYears,TOddDays,i,Tdays=0;
    int CYears,OddYears,OddDays=0,LeftYears,leapYears;
 
    printf("Enter the Day(1-31):");
    scanf("%u",&day);
    printf("\nEnter the Month(1-12):");
    scanf("%u",&month);
    printf("\nEnter the Year:");
    scanf("%u",&year);
 
    printf("\n\nInputDate : %02u/%02u/%04u",day,month,year);
 
    /*validate the Inputs*/
    if(0 == validateInput(day,month,year))
            return 1;
 
    /*Get the completed years*/
    CYears = year-1;
 
    /*getting the no of years after
    *the century with 0 odd days*/
    OddYears = CYears%400;
 
    /*get the Odd days for complete centuries out of the Oddyears found above.
    *i.e 100 years = 5 odd days ,200 years = 3 odd days,etc. */
     OddDays += yearMap[OddYears/100];
 
    /*get the years left out (<100)*/
    LeftYears = OddYears%100;
 
    /*calculate leap years*/
    leapYears = LeftYears/4;
    /*calculate ordinary years*/
    OrdinaryYears = LeftYears - leapYears;
    /*total odd days for left out years*/
    TOddDays = leapYears*ODD_DAYS_LEAP_YEAR + OrdinaryYears*ODD_DAYS_ORDINARY_YEAR;
    /*Getting overall odd days after adding with odd days of left out years*/
    OddDays += TOddDays%7;
 
    for(i=0;i<month-1;i++)
    {
        Tdays += daysInMonth[i];
    }
 
    Tdays += day;
    OddDays = (OddDays + Tdays)%7;
    printf("\nThe day is %s\n",dayStrings[OddDays]);
 
    return(0);
  }/*end of  main()*/
 
/*validates date and also changes
* the feb month days to 29 in daysInMonth array
*if it is a leap year */
int validateInput(int day,int month,int year)
{
    //if month is geater than 12
    if(month>12)
    {
        printf("\n\nIncorrect Month");
        return 0;
    }
 
    //if given month is february then check for leap year
    //if leap year then check for no of day
    //if no of days is greater than 29 print the error message
    if(2 == month)
    {
      if(IS_LEAP_YEAR(year))
        {
            if(day>29)
                {
                    printf("\n\nIncorrect no of days for the given Month");
                    return 0;
                }
                /*increment the feb month days*/
                daysInMonth[1]+=1;
                return 1;
        }
    }
    //check for the valid no of days for a given month
    if(day>daysInMonth[month-1])
    {
        printf("\n\nIncorrect no of days for the given Month");
        return 0;
    }
    return 1;
}
