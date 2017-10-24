#include<stdio.h>
int main()
{
	int num,rem,bin=0,i=0;
	scanf("%d",&num);
	while(num)
	{
		rem=num%16;
		bin=bin+rem*pow(10,i);
		num=num/16;
		i++;
	}
	printf("%d",bin);
}
