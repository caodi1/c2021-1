﻿#include<stdio.h>
constexpr auto N = 64;
int main() {
	int a[N];
	int b[N];
	int c[N];
	int d = 1;
	for (int i = 0; i < N; i++) {
		   a[i]=d;
		d++;
	}
	int n = d-1;
		b[0] = a[0];
		c[0] = a[ 1];
		c[ 1] = b[0];
		for (int i = 2; i<n; i++){

			for (int j = 0;j<i;j++) {
				b[0] = a[i];
				printf("a->b\n");
			 b[j + 1]=c[j];
			 printf("c->b\n");

			}
			for (int j = 0; j <= i; j++) {
				c[j] = b[j];
				printf("b->c\n");
			}
}

	
}