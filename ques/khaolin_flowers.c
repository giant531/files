#include <stdio.h>
	int main()
	{
		int t;
		scanf("%d",&t);
		int arr[t];
		for(int i=0;i<t;i++)//scans array
		{
			scanf("%d",&arr[i]);
		}
		printf("\nSteps : \n");
		for(int i=1;i<t;i++)//applies process of watering
		{
			for(int j=0;j<i;j++)
			{
				if(arr[j]>=arr[i])
				{
					arr[j]++;
				}
			}
			for(int i=0;i<t;i++)//printf new array
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
		}
		printf("\nResult : \n");
		for(int i=0;i<t;i++)//printf new array
		{
			printf("%d ",arr[i]);
		}
		return 0;
	}