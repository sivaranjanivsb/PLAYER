#include <stdio.h>

int main(void) {
	int a[10],i,ba=255;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	ba=ba&a[1];
	for(i=2;i<=5;i++)
	{
		ba=ba^a[i];
	}
	printf("%d",ba);
	return 0;
}
