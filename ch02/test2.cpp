#include <stdio.h>

int main()
{
	int a[5]={5,2,0,3,-8};
	printf("����֮ǰ:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	//ð������
	for(int i=1;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int term=a[j];
				a[j]=a[j+1];
				a[j+1]=term;
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
