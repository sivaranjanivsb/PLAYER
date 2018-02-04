#include <stdio.h>

int main(void) {
	int a[5],i,j,n=0;
	for(i=1;i<=5;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[j]<a[i])
			{
				n++;
				break;
			}
		}
	}
	if(n==0)
	{
	printf(" sorted");
	}
	else
	printf("not sorted");
	return 0;
}
