#include <stdio.h>

int main(void) {
	int a[5],i,j,no,temp;
    for(i=1;i<=5;i++)
    {
	scanf("%d",&a[i]);
    }
    scanf("%d",&no);
    for(i=1;i<=5;i++)
    {
    if(a[i]<no)
    printf("%d \t",a[i]);
    }
	return 0;
}
