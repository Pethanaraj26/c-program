#include <stdio.h>

int main()
{  
    int a,year,day,week;
    printf("enter the number=");
    scanf("%d",&a);
    year=a % 365;
    week=year % 7;
    day=week % 1;
    printf("the year is %d",year);
    printf("the week is %d",week);
    printf("the day is %d", day);
    
    
   

    return 0;
}