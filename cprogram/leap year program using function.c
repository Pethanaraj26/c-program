#include<stdio.h>
int year(int);
int main()
{
    int s;
    printf("enter the year=");
    scanf("%d",&s);
    year(s);
    
}
    int year(int s)
    {
    if(s%4==0)
    {
        printf(" leap year");
    
    }
    else
    {
         printf("non leap year");
         
    }
     return s;
    }