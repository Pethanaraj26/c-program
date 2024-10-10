#include<stdio.h>
int square(int i);
int main()
{
     int a,b;
     printf("enter the number =");
     scanf("%d",&a);
     b=square(a);
     printf("square value=%d",b);
}    
     int square(int i)
     {
     return i*i;
     }