#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if(((a>64)&&(a<=90))||((a>96)&&(a<=122)))
	printf("CHARACTER");
	else
	printf("NOT A CHARACTER");
	return 0;
}
