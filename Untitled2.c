#include<stdio.h>

void fib(int n)
{
  int a=0,b=1,c,i;
  printf("%d\t%d\t",a,b);
  for(i=3;i<=n;i++)
  {
  	c=a+b;
  	printf("%d\t",c);
  	a=b;
  	b=c;
  	
  }
  //return c;	
}
main()
{
int n;
scanf("%d",&n);
printf("%d\n",n);
fib(n);
}
