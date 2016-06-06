#include <stdio.h>

int main(void) {
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max= a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	printf("the maximum number among %d %d %d is %d",a,b,c,max);
	// your code goes here
	return 0;
}
