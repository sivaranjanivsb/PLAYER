#include <stdio.h>

int main(void) {
           int no,rem,sum=0;
           scanf("%d",&no);
           while(no!=0)
           {
           	rem=no%10;
           	sum=sum+(rem*rem);
           	no=no/10;
           }
printf("%d",sum);
	
	return 0;
}
