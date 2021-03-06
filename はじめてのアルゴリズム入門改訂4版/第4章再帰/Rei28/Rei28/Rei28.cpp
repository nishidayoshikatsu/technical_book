// Rei28.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>
#include<time.h>

#define N 8

int p[N + 1];
int count=0;

void perm(int);


int main(void)
{
	int i;
	clock_t start, end;
	double jikan;

	for (i = 1; i <= N; i++) {
		p[i] = i;
	}

	start = clock();
	perm(1);
	end = clock();
	jikan = (double)(end - start) / CLOCKS_PER_SEC;
	printf("処理時間＝%.2lf[s]\n", jikan);
	printf("パターン数＝%d[回]\n", count);

    return 0;
}

void perm(int i)
{
	int j, temp;

	if (i < N) {
		for (j = i; j <= N; j++) {
			//p[i]とp[j]の交換
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
			//再帰呼び出し
			perm(i + 1);
			//元に戻す
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
	}
	else {
		for (j = 1; j <= N; j++) {
			printf("%d ", p[j]);
		}
		printf("\n");
		count++;
	}
}