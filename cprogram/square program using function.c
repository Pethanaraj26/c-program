#include<stdio.h>
int square(int);
int main()
{
    int a,b;
    printf("enter the number=");
    scanf("%d",&a);
    b=square(a);
    printf("enter the square value=%d",b);
    
}   
      int square(int a)
   {
       
       return a*a;
   }