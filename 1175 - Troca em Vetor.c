#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int num[20], y[20], z = 0;
	for(int i = 0; i < 20; i++)
	{
	//	printf("N[%d] = ", i);
		scanf("%d",&num[i]);
	}
	for(int i = 0; i < 20; i++)
	{
		y[z] = num[19-i];
		printf("N[%d] = %d\n",i, y[z]);
		z++;
	}
	return 0;
}
