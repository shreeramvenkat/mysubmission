#include<stdio.h>
int main()
{
int i,n;
unsigned long long fact=1;
printf("Enter integer:");
scanf("%d",&n);
if(n<0)
printf("error");
else
{
for(i=1;i<=n;i++)
{fact*=i;}
printf("Factorial of %d=%llu",n,fact);
}
return 0;
}
