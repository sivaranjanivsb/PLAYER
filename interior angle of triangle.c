#include <stdio.h>

int main(void) {
    int a,b,c,angle;
    scanf("%d %d %d",&a,&b,&c);
    angle=(a+b+c);
    if(angle==180)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;
}
