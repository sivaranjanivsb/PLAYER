#include <stdio.h>

int main(void) {
	int a[5],b,i;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
      { 
	    if((a[i]%2==0)||(a[i]%2!=0))
	    {
	    b=i;
      }
      }
   
    printf("%d",a[b]);
   
	return 0;
}
