#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;			/* 合計値 */
	int num, tmp;

	printf("整数は何個ですか：");
	scanf("%d", &num);

	while (i < num) {
		printf("No%d：", i++);	/* iの値をインクリメントした後に表示 */
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("合計値：%d\n", sum);
	printf("平均値：%.2f\n", (double)sum / num);

	return 0;
}
