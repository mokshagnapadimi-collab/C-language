#include<stdio.h>
main()
{
	int marks[5];
	int i,sum=0,avg;
	printf("entre marks");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
		printf("the sum of marks is:%d\n",sum);
	for(i=4;i>=0;i--)
	avg=sum/5;
	printf("the avg of marks is:%d",avg);
	
}
