﻿#include<stdio.h>
int main() {
	int num = 100;
	int a = 0;//百位数
	int b = 0;//十位数
	int c = 0;//个位数
	printf("水仙花数有：");
	for (; num < 1000; num++) {
		a = num / 100;
		b = num / 10 % 10;
		c = num % 100 % 10;
		if (num == a * a * a + b * b * b + c * c * c) {
			printf("%d ", num);
		}
	}
	return 0;
}
