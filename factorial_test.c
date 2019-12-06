#include<stdio.h>
int main()
{
int i,n;
unsigned long long f=1;
printf("Enter an integer:");
scanf("%d",&n);
if(n<0)
printf("error");
else
{
for(i=1;i<=n;i++)
{f*=i;}
printf("The Factorial of %d=%llu",n,f);
}
return 0;
}
