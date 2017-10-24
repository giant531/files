#include <stdio.h>

    void swap(int *a,int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    int main()
    {
        int  a[5]={1,8,6,9,0};
        int i,j;
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(a[j]>a[i])
                {
                    swap(&a[j],&a[i]);
                }
            }
        }
        for(i=0;i<5;i++)
        {
            printf("%d\n",a[i]);
        }
    }