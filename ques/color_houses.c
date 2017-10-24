#include <stdio.h>
	int main()
	{
		int t,h,tot,small;
		scanf("%d",&t);
		for(int i=0;i<t;i++)
		{
			scanf("%d",&h);
			int cost[h][3],pos[h];
			tot=0;
			for(int j=0;j<h;j++)
			{
				small=10000;
				for(int k=0;k<3;k++)
				{
					
					scanf("%d",&cost[j][k]);
					if(pos[j-1]==k)
						cost[j][k]=100000;
					if(cost[j][k]<small)
					{
						small=cost[j][k];
						pos[j]=k;
					}
				}
				cost[j+1][pos[j]]=10000;
				tot+=small;
			}
			printf("%d\n",tot);
		}
	}