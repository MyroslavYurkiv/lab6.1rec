#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0 && a[i] % 5 == 0)
			return a[i] + Sum(a, size, i + 1);
		else
			return Sum(a, size, i + 1);
	}
	else
		return 0;
}
int Num(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0 && a[i] % 5 == 0)
			return 1 + Num(a, size, i + 1);
		else
			return Num(a, size, i + 1);
	}
	else
		return 0;
}
void Change(int* a, const int size, int i)
{
	if (a[i] > 0 && a[i] % 5 == 0)
		a[i] = 0;
	if (i < size - 1)
		 Change(a, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int b[n];
	int Low = -40;
	int High = 50;
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	cout << "Sum = " << Sum(b, n, 0) << endl;
	cout << "Num = " << Num(b, n, 0) << endl;
	Change(b, n, 0); 
	Print(b, n, 0);
	return 0;
}