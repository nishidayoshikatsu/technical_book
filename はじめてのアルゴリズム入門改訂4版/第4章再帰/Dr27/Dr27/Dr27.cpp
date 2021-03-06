// Dr27.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include<stdio.h>

long int fib(long int n);

int main(void)
{
	long int n;

	for (n = 1; n <= 20; n++) {
		printf("%3ld: %ld\n", n, fib(n));
	}

    return 0;
}

long int fib(long int n)
{
	long int a, b, dummy, i;
	a = 1;
	b = 1;

	for (i = 3; i <= n; i++) {
		dummy = b;
		b = a + b;
		a = dummy;
	}

	return b;
}