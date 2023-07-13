#include<stdio.h>
int main(void)
{
	int k, max, min;
	int data[20];

	for (k = 0; k < 20; k++) {
		printf("排列data[%d]にデータを入力してください\n", k);
		scanf_s("%d", &data[k]);
	}
	max = data[0];
	min = data[0];

	for (k = 0; k < 20; k++) {
		if (data[k] > max) {
			max = data[k];
		}
		if (data[k] < min) {
			min = data[k];
		}
	}
	printf("最大値は%dです¥n",max);
	printf("最小値は%dです¥n",min);
}