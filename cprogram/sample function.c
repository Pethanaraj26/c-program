#include <stdio.h>
void somefn();
void main()
{ 
    somefn();
} 
void somefn()
{ 
    int i;
    while(i<10)
    {
         printf("&");
         i++;
    }    
    }
