#include<stdio.h>

void main()
{
int a=0,b=1,c=0,n=0;
printf("Enter the limit :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  a=c;
  printf("%d ",c);
  c=a+b;
  b=a;
}
return;
}
