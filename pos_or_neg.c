#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	if(num==0)
	printf("ZERO");
	else
	(num>0)?printf("POSITIVE"):printf("NEGATIVE");
	return 0;
}
