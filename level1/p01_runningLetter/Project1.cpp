﻿#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(){ 
	int a = 1;
	int b;
	while (a <=120) {
		b = 1;
		system("cls");
		while (b <= a) {
			printf(" ");
			b++;


		}
		printf("H");
		Sleep(10);
		a++;
	}
	a = 240;
	while (a > 120) {
		b = 1;
		system("cls");
		while (b <= a) {
			printf(" ");
			b++;
		}
		printf("H");
		Sleep(10);
		a--;
	}




}