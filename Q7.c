#include<stdio.h>

int main()
{
    int n;
    int i;
   printf("enter the value of n");
   scanf("%d",&n);
    
    for ( i = n; i >= 0; i-=2)
    {
        if(n%2==0)
        printf("%d\n",i);
    }
   
    return 0;
}