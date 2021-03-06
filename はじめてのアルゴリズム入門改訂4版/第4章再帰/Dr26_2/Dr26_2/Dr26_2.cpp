// Dr26_2.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>
#include<time.h>

long int combi(int n, int r);

int main(void)
{
	int n, r;
	clock_t start, end;
	double jikan;

	start = clock();
	for (n = 0; n <= 30; n++) {
		for (r = 0; r <= n; r++) {
			printf("%d C %d =%ld\t", n, r, combi(n, r));
		}
		printf("\n");
	}
	end = clock();

	jikan = (double)(end - start) / CLOCKS_PER_SEC;
	printf("処理時間＝%.2lf[s]\n", jikan);

    return 0;
}

long int combi(int n, int r)
{
	if (r == 0 || n == r) {
		return 1;
	}
	else {
		return (combi(n - 1, r - 1) + combi(n - 1, r));
	}
}