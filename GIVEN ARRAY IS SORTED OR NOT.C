#include <stdio.h>

int main(void) {
	int a[5],i,j,c=1,n=1;
	for(i=1;i<=5;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[i]<a[j])
			{
				n++;
			}
		}
	}
	if(n==10)
	{
	printf(" sorted");
	}
	else
	printf("not sorted");
	return 0;
}
