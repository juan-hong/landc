/*
	���� N���� �� / �ҽ� / ����  N ���� ���� ������ִ� ���α׷�
	2022�� 5�� 10�� / ���� �غ���
*/

#include <stdio.h>
#pragma warning (disable:4996)
#define MAX 1000000

long long sum(int* a, int n);
int a[MAX];

int main(void)
{
	int n;

	printf("�Է��� ������ ������? ");
	scanf("%d", &n);

	printf("%d�� ��ŭ�� ������ �Է��Ͻÿ� ", n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("���� %ld�Դϴ�", sum(a, n));

}

long long sum(int* a, int n)
{
	int get = 0;

	for (int i = 0; i < n; i++)
		get += a[i];
	
	return (get);
}