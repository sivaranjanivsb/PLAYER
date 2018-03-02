#include <stdio.h>
int main(void) {
	int a[50][50],i,j,n,s1=0,s2=0,product;
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
            		{ s1=s1+a[i][j]; }
            		if(j==(n-i+1))
                    { s2=s2+a[i][j]; }            		
            	}
            }
            product=s1*s2;
            printf("%d",product);
	return 0;
}
