#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int P,O,I;
	printf("請輸入幾月幾日:");
	scanf("%d %d", &P, &O);

	I = (P * 2 + O) % 3;
	if(I==0)
	{
		printf("普通");
	}
	else if (I == 1)
	{
		printf("吉");
	}
	else if (I == 2)
	{
		printf("大吉");
	}
	else
	{
		printf("輸入錯誤");
	}

	system("pause");
	return 0;
}
