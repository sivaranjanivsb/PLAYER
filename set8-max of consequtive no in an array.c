#include <stdio.h>

int main(void)
{
int a[5],i;
for(i=1;i<=5;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<5;i++)
{
	if(a[i]<a[i+1])
	{
		printf("%d",a[i+1]);
	}
	else
	{
		printf("%d",a[i]);
	}
	
}
	return 0;
}
