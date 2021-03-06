// Rei1.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

/*
 *----------------------------------------
 *			漸化式の計算
 *----------------------------------------
 */

#include<stdio.h>

//関数のプロトタイプ宣言
long combi(int, int);

//main関数
int main(void)
{
	//変数宣言
	int n, r;

	for (n = 0; n <= 5; n++) {
		for (r = 0; r <= n; r++) {
			printf("%dC%d=%ld ", n, r, combi(n, r));
		}
		printf("\n");
	}

	return 0;
}

//combi関数
long combi(int n,int r)
{
	//変数宣言
	int i;
	long p = 1;

	//漸化式の計算
	for (i = 1; i <= r; i++) {
		p = p * (n - i + 1) / i;
	}

    return p;
}

