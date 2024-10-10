#include <stdio.h>
int s(int*a,int*b);
int main() 
{
   int a=3,b=6,c;
   printf("before swap:a=%d,b=%d \n",a,b);
    s(&a,&b) ;  
   printf("after swap:a=%d,b=%d \n",a,b);
  
    
} 
    int s(int*a,int*b){
        int temp;
        temp=b;
        b=a;
        a=temp;
        return ;
      
  }