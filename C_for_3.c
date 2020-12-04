#include <stdio.h>

int main(void)
{
	char a[100];
	int num = 0;
	printf("학번을 입력하시오. : ");
	scanf_s("%s", a, sizeof(a));
	printf("학번 : ");
	for (int i = 0; a[i] != NULL; i++)
	{
		printf("%c", a[i]);
		num++;
	}
	
	return 0;
}
