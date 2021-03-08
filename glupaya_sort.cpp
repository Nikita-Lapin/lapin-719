// A - сортируемый массив, n - количество элементов

#include <iostream>


using namespace std;

int main()
{
	int *A; // указатель для  массива
	int n; // размер массива

	// Ввод количества элементов массива
	cout << "n = ";
	cin >> n;

	A = new int[n]; // создание массива размера n

	// заполнение массива
	cout << "array = ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
		int i = 0, tmp;
	while (i < n - 1)
	{
		if (A[i + 1] < A[i])
		{
			tmp = A[i];
			A[i] = A[i + 1];
			A[i + 1] = tmp;
			i = 0;
		}
		else i++;
	}
	// Вывод отсортированного массива
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	delete[] A; // удаление массива

	return 0;
}
