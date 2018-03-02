#include <stdio.h>
int main(void) {
	int a[50][50],i,j,n,p1=1,p2=1,sum;
	scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
            	for(j=1;j<=n;j++)
            	{
            		scanf("%d",&a[i][j]);
            	}
            }
            for(i=1;i<=n;i++)
            {
            	for(j=1;j<=n;j++)
            	{
            		if(i==j)
            		{ p1=p1*a[i][j]; }
            		if(j==(n-i+1))
                    { p2=p2*a[i][j]; }            		
            	}
            }
            sum=p1+p2;
            printf("%d",sum);
	return 0;
}
