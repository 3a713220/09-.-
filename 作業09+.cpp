#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int P,O,I;
	printf("�п�J�X��X��:");
	scanf("%d %d", &P, &O);

	I = (P * 2 + O) % 3;
	if(I==0)
	{
		printf("���q");
	}
	else if (I == 1)
	{
		printf("�N");
	}
	else if (I == 2)
	{
		printf("�j�N");
	}
	else
	{
		printf("��J���~");
	}

	system("pause");
	return 0;
}
