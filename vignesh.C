#include<stdio.h>
int main()
{
int a,b;
printf("enter a number:");
scanf("%d",&a);
if(a>=0)
{
if(a==0)
{
printf("\n the number is ZERO");
}
else
{
printf("\n the number is POSITIVE");
}
}
else
{
printf("\n the number is NEGATIVE");
}
return 0;
}
