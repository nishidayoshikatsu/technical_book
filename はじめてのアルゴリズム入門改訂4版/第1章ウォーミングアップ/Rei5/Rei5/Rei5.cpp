// Rei5.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM 1000000

//double rnd(void);

/*//main関数の定義
int main(void)
{
	//変数宣言
	double x, y, pi;
	int i, in = 0;

	for (i = 0; i < NUM; i++) {
		x = rnd();
		y = rnd();
		if (x*x + y * y <= 1) {
			in++;
		}
	}
	pi = (double)4 * in / NUM;
	printf("πの値＝%f\n", pi);

    return 0;
}

//rnd関数の定義
double rnd(void)
{
	return (double)rand() / (RAND_MAX + 0.1);
}*/

int main(void)
{
	int i, in=0;
	double x, y,pi;

	srand(time(NULL));
	for (i = 0; i < NUM; i++) {
		x = (double)rand() / RAND_MAX ;
		y = (double)rand() / RAND_MAX ;
		if ((x*x + y * y) <= 1) {
			in++;
		}
	}
	pi = (double)(4 * in) / NUM;
	printf("πの値＝%lf\n", pi);

	return 0;
}