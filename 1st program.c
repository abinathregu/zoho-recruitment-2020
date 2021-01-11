1. C program
#include<stdio.h>
int main()
{
int n,temp,tem;
scanf("%d",&n);
tem=n;
for(int i=n;i>=0;i--)
{
temp=n;
for(int j=n;j>=0;j--)
{ 
printf("%d",temp);
if(tem<n&&j>i)
{
temp--;
}
}
tem--;
printf("\n");
}
return 0;
}