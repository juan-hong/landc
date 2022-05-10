/*
	정수 N개의 합 / 소스 / 정수  N 개의 합을 출력해주는 프로그램
	2022년 5월 10일 / 빨리 해보자
*/

#include <stdio.h>
#pragma warning (disable:4996)
#define MAX 1000000

long long sum(int* a, int n);
int a[MAX];

int main(void)
{
	int n;

	printf("입력할 정수의 개수는? ");
	scanf("%d", &n);

	printf("%d개 만큼의 정수를 입력하시오 ", n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("합은 %ld입니다", sum(a, n));

}

long long sum(int* a, int n)
{
	int get = 0;

	for (int i = 0; i < n; i++)
		get += a[i];
	
	return (get);
}