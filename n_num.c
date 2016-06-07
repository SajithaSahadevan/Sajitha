#include <stdio.h>

int main(void) {
	int i,n,sum=0;
	printf("Enter a natural number:...");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nthe sum is...%d",sum);
	// your code goes here
	return 0;
}
