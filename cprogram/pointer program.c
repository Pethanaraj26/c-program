#include <stdio.h>

int main()
{ 
    int a;
    a=10;
    int *p;
    p=&a;
    printf("%d",a);
    printf("%d",*p);
    return 0;
}