#include <stdio.h>
#include<string.h>
int main(void) {
          char a[10];
          int i,l,c=0;
         scanf("%s",a);
         l=strlen(a);
          for(i=0;a[i]!='\0';i++){
          if((a[i]=='a')||(a[i]=='b'))
	c++;}
	if(c==l)
	printf("yes");
	else
	printf("no");
	return 0;
}
