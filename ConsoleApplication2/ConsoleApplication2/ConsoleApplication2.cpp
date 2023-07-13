#include<stdio.h>
int main(void)
{
	int n, sum;
	double avg;
	n = 0;
	sum = 0;

	int data[51];
	data[50] = -1;

	do {
		printf("配列　data[%d]にデータを入力してください　(-1で終了）\n", n);
		scanf_s("%,&data[n]");
		n = n + 1;
		if (n == 50) {
			break;

		}
	} while (data[n - 1] != -1);
	n = 0;
	while (data[n] != -1); {
		n = n + 1;
	}
	if (n > 0) {
		avg = (double)sum / n;
}
	else {
		avg = 0;
	}
	printf("配列data[]の合計値は%dです\n", sum);
	printf("平均値は%fです¥n", avg);
}

