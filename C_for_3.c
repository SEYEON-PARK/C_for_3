#include <stdio.h>

int main(void)
{
	char a[100];
	int num = 0;
	printf("�й��� �Է��Ͻÿ�. : ");
	scanf_s("%s", a, sizeof(a));
	printf("�й� : ");
	for (int i = 0; a[i] != NULL; i++)
	{
		printf("%c", a[i]);
		num++;
	}
	
	return 0;
}