#include <stdio.h>

int main(void) {
           int a,r,sum=0;
           scanf("%d",&a);
           while(a!=0)
           {
           	r=a%10;
           	sum=sum+(r*r);
           	a=a/10;
           }
printf("%d",sum);
	
	return 0;
}
