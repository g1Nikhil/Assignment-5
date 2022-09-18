#include<stdio.h>

int main()
{
    int n;
    int i;
   printf("enter the value of n");
   scanf("%d",&n);
    
    for ( i = 0; i <= n; i++)
    {
        printf("%d\n",i*i*i);
    }
   
    return 0;
}