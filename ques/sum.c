#include <stdio.h>
#include <math.h>

	
	int prime(int n)
	{
		int flag=0,i;
		for(i=n;i>1;i--)
		{
			flag=0;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				return i;
			}
		}
	}
	
	int main()
	{
		int n,sum=0,s;
		/*
		int flag=0,count=0,arr[78666];
		for(int i=2;i<1000000;i++)// Making an array of all prime numbers between 2 and 10,00,000
		{
			flag=0;
			for(int j=2;j<sqrt(i);j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				arr[count++]=i;
			}
		}
		*/
		scanf("%d",&n);
		s=prime(n);
		while(n)
		{
			
			if(n-s !=1 && n-s>=0)
			{
				n-=s;
				sum++;
				s=prime(n);
			}else
			{
				s=prime(s-1);
			}
		}
		
		printf("%d\n",sum);
	}