#include <stdio.h>// підключення бібліотек
#include <clocale>
#define n 15// визначення розміру масиву
int main()
{
	setlocale(LC_ALL, "ukr");// встановлення української локалізації
	double X[n];// оголошення масиву Х
	printf("Введiть 15 елементiв масиву:\n");
	int i;
	for (int i = 0; i < n; i++) {
		printf("Елемент %d:", i + 1);// заповнення масиву
		scanf_s("%lf", &X[i]);
	}

	double sort;//змінна для збереження меншого значення
	for (int i = 1; i < n; i++) {// сортування бульбашкою
		for (int j = 0; j < n - i; j++)
		{
			if (X[j] < X[j + 1])
			{
				// Обмін елементів
				sort = X[j];
				X[j] = X[j + 1];
				X[j + 1] = sort;
			}
		}
	}
	printf("\n");
	printf("Виведення вiдсортованого масиву");//вивід результату сортування
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("Елемент %d вiдсортованого масиву: %.1lf\n", i + 1, X[i]);// вивід результату сортування
	}
	printf("\n");
	double A;// змінна для збереження цільового елементу
	printf("Введiть цьольове значення з масиву :");// введення користувачем цільвого значення
	scanf_s("%lf", &A);

	int Left = 0, Right = n - 1, Middle, flag = 0;//змінні для бінарного пошуку

	while (Left <= Right) {
		Middle = (int)((Left + Right) / 2);//пошук середнього елемента
		if (X[Middle] == A) {
			flag = 1;//показник знайденості цьольового значення
			break;
		}
		if (A < X[Middle]) {//пошук ліворуч
			Left = Middle + 1;
			
		}
		else {//пошук праворуч
			Right = Middle - 1;
			
		}
	}
		if (flag) {// вивід результату
			printf("Iндекс= %d", Middle);
			
		}
		else {
			printf("Цiльовий елемент не знайдено");

		}

	
}




