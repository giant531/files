#include <stdio.h>
#include <math.h>
	int main()
	{
		int n,flag=0,count=0;
		scanf("%d",&n);
		for(int i=2;i<1000000;i++)
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
				count++;
			}
		}
		printf("%d",count);
	}