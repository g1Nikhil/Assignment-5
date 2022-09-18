#include<stdio.h>

int main()
{
    int n;
    int i;
   printf("enter the value of n");
   scanf("%d",&n);
    
    for ( i = 1; i <= n; i+=2)
    {
        printf("%d\n",i);
    }
   
    return 0;
}