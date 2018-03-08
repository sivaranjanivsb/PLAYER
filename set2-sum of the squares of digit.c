#include <stdio.h>

int main(void) {
	int no,s=0,rem;
	scanf("%d",&no);
	while(no!=0)
	{
	  rem=no%10;
	  s=(rem*rem)+s;
	  no=no/10;
	}
	printf("%d",s);
	return 0;
}
