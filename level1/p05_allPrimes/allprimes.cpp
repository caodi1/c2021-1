﻿#include<stdio.h>
#include<time.h>
int main() {
	clock_t t1, t2;
	t1 = clock();
	int num ;
	int a ;
	int i ;
	printf("2-1000的素数有：");
	for (num = 3; num < 1000;num++) {
		i = 1;
		for (a = 2; a < num; a++) {
			if (num % a == 0) {
				i = 0;
				break;
			}

		}
		if (i == 1) {
			printf("%d  ", num);
		}
		
	}
	t2 = clock();
	printf("\n");
	printf("用时%d毫秒", t2 - t1);
	return 0;
}

