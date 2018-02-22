#include <stdio.h>

int main(void) {
	int a[10],i,ba=275;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		ba=ba&a[i];
	}
	printf("%d",ba);
	return 0;
}
