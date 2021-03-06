// Dr3_2.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>

#define Num 10			//データ数
#define Max 36			//スコアの最大
#define Min -20			//スコアの最小
#define Bias 1-(Min)	//負の値は添え字にできないから正にするためのバイアス

//main関数の定義
int main(void)
{
	int a[] = { -3,2,3,-1,-2,-6,2,-1,1,5 };
	int i, juni[Max + Bias + 1];			//順位付けのたえの配列

	for (i = Min + Bias; i <= Max + Bias; i++) {
		juni[i] = 0;
	}
	for (i = 0; i < Num; i++) {
		juni[a[i] + Bias]++;
	}
	juni[0] = 1;
	for (i = Min + Bias; i <= Max + Bias; i++) {
		juni[i] = juni[i] + juni[i - 1];
	}
	printf("　得点　順位\n");
	for (i = 0; i < Num; i++) {
		printf("%6d%6d\n", a[i], juni[a[i] + Bias - 1]);
	}

    return 0;
}

