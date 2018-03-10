#include <stdio.h>
#include<math.h>
int main(void) {
	int no,i,power,c=0;
	scanf("%d",&no,&power);
	for(i=1;i<=no;i++){
	if(pow(power,i)==no)
	c++;}
	if(c>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
