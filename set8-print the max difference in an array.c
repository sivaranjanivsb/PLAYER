#include <stdio.h>

int main(void) {
	int a[5],i,j,temp;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
      { 
	    for(j=1+i;j<=5;j++)
	    {
	    	if(a[i]>a[j])
	    	{
	    		temp=a[i];
	    		a[i]=a[j];
	    		a[j]=temp;
	    	}
	    }
   
      }
   
    printf("%d\t %d",a[1],a[5]);
   printf("\t%d",(a[5]-a[1]));
	return 0;
}
