
#include <stdio.h>
int oddeven(int);
int main()
{ 
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    oddeven(a);
  
    
}
 int oddeven(int a)
 {
     if(a%2==0)
    { 
        printf("the number is even ");
    }
    else
    { 
        printf("the number is odd");
    }
    return a;
 }