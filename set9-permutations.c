#include <stdio.h>

int main(void) {
	int n,r,i,ans2=1,ans=1,c;
	scanf("%d %d",&n,&r);
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	
	c=n-r;
	for(i=1;i<=c;i++)
	{
		ans2=ans2*i;
	}
	printf("%d",(ans/(ans2)));
	return 0;
}
