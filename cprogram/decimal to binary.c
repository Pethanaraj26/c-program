 
    #include<stdio.h>
    void DtoB(int);
    int main()
    { 
        int a;
        printf("enter the value of a=");
        scanf("%d",&a);
        DtoB(a);
        return 0;
    }
    void DtoB(int n)
{ 
    if(n>1)
    { 
        DtoB(n/2);
    } 
    printf("%d",n%2);
    
}