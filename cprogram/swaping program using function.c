#include<stdio.h>
 void swap(a,b)
    {
        int temp;
        printf("before swaping:a=%d\n",a);
        printf("before swaping:b=%d \n",b);
    
        temp=a;
        a=b;
       b=temp;
        printf("after swaping:a=%d\n",a);
        printf("after swaping:b=%d \n",b);
        
    }
    
int main()
{
    swap(3,5);
    
} 
    