#include <stdio.h>// ���������� �������
#include <clocale>
#define n 15// ���������� ������ ������
int main()
{
	setlocale(LC_ALL, "ukr");// ������������ ��������� ����������
	double X[n];// ���������� ������ �
	printf("����i�� 15 �������i� ������:\n");
	int i;
	for (int i = 0; i < n; i++) {
		printf("������� %d:", i + 1);// ���������� ������
		scanf_s("%lf", &X[i]);
	}

	double sort;//����� ��� ���������� ������� ��������
	for (int i = 1; i < n; i++) {// ���������� ����������
		for (int j = 0; j < n - i; j++)
		{
			if (X[j] < X[j + 1])
			{
				// ���� ��������
				sort = X[j];
				X[j] = X[j + 1];
				X[j + 1] = sort;
			}
		}
	}
	printf("\n");
	printf("��������� �i������������ ������");//���� ���������� ����������
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("������� %d �i������������ ������: %.1lf\n", i + 1, X[i]);// ���� ���������� ����������
	}
	printf("\n");
	double A;// ����� ��� ���������� ��������� ��������
	printf("����i�� �������� �������� � ������ :");// �������� ������������ �������� ��������
	scanf_s("%lf", &A);

	int Left = 0, Right = n - 1, Middle, flag = 0;//���� ��� �������� ������

	while (Left <= Right) {
		Middle = (int)((Left + Right) / 2);//����� ���������� ��������
		if (X[Middle] == A) {
			flag = 1;//�������� ���������� ���������� ��������
			break;
		}
		if (A < X[Middle]) {//����� ������
			Left = Middle + 1;
			
		}
		else {//����� ��������
			Right = Middle - 1;
			
		}
	}
		if (flag) {// ���� ����������
			printf("I�����= %d", Middle);
			
		}
		else {
			printf("�i������ ������� �� ��������");

		}

	
}




