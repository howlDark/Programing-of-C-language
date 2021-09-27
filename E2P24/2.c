#include <stdio.h>

int main() {
	float F, C;
	printf("输入华氏温度：\n");
	scanf("%f", &F);
	C = 5 * (F - 32) / 9;
	printf("转换后的摄氏度为：%.2f", C);
	return 0;
}
