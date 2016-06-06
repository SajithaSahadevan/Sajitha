#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	((a=='a')||(a=='e')||(a=='u')||(a=='i')||(a=='o'))?printf("VOWEL"):printf("CONSONANT");
	return 0;
}
