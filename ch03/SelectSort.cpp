#include <stdio.h>

int main()
{
	int a[5]={3,2,0,-8,9};
	printf("����֮ǰ:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[j]<a[i])
			{
				int term=a[j];
				a[j]=a[i];
				a[i]=term;
			}
		}
	}
	
	printf("����֮��:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
