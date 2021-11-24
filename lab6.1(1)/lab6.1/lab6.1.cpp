// Lab_05_5.cpp
// < Половка Злата >
// Лабораторна робота № 6.1(1)
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 0.6

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

//сума всіх не додатніх кратних 5
int Sum(int* a, const int size)
{
	int S = 0; 
	for (int i = 0; i < size; i++)
		if (!((a[i]) % 5 == 0 && a[i]>0))
			S += a[i];
	return S;
}

//к-сть всіх не додатніх кратних 5
int k(int* a, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (!((a[i]) % 5 == 0 && a[i] > 0))
			k++;
	return k;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int a[n];
	

	int Low = -40;
	int High = 50;

	Create(a, n, Low, High);
	Print(a, n);

	
	cout << "S = " << Sum(a, n) << endl; 
	cout << "k = " << k(a, n) << endl; 

	//модифікований масив
	for (int i = 0; i < n; i++)
	{
		if ((a[i]) % 5 == 0 && a[i] > 0)
			a[i] = 0;
	}
	
	void Print(int* a, const int size);
	{
		for (int i = 0; i < n; i++)
			cout << setw(4) << a[i];
		cout << endl;
	}
	return 0;
}