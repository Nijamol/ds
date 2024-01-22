#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,res;
printf("enter two elements:");
scanf("%d%d",&a,&b);
res=sum(a,b);
printf("sum of %d and %d is : %d/n",a,b,res);
return 0;
}int sum (int a,int b)
{
return a+b ;
}
