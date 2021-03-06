// Dr18_2.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 50

void print_data(int *a);

int main(void)
{
	int a[N];
	int left=0, right=N-1, shift, i, temp;
	clock_t start, end;
	double jikan;

	srand((unsigned int)time(NULL));
	for (i = 0; i < N; i++) {
		a[i] = rand() % 100;
	}
	
	printf("ソート前：\n");
	print_data(a);

	start = clock();
	while (left < right) {
		for (i = left; i < right; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i+1] = temp;

				shift = i;
			}
		}
		right = shift;
		for (i = right; i > left; i--) {
			if (a[i] < a[i - 1]) {
				temp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = temp;

				shift = i;
			}
		}
		left = shift;
	}
	end = clock();
	jikan = (double)(end - start) / CLOCKS_PER_SEC;

	printf("ソート後：\n");
	print_data(a);
	printf("処理時間＝%.2lf[s]\n", jikan);

    return 0;
}

void print_data(int *a)
{
	int i;

	for (i = 0; i < N; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}