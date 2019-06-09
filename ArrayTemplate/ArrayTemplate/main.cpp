#include <iostream>
using namespace std;

template <typename T>
void makearray(T* array, T* array2, int size)
{
	T total = 0;
	for (int i = 0; i < size; i++)
		total += array[i];
	T average = total/size;
	for (int i = 0; i < size; i++)
		array2[i] = abs(average - array[i]);
}
int main()
{
	int size;
	cout << "Please, enter a size of the array:\n";
	cin >> size;
	int* iArray = new int[size];
	for (int i = 0; i < size; i++)
		cin >> iArray[i];
	int* iArray2 = new int[size];
	makearray(iArray, iArray2, size);
	for (int i = 0; i < size; i++)
		cout << iArray2[i] << "\t";
	delete[] iArray;
	delete[] iArray2;
	float* fArray = new float[size];
	for (int i = 0; i < size; i++)
		cin >> fArray[i];
	float* fArray2 = new float[size];
	makearray(fArray, fArray2, size);
	for (int i = 0; i < size; i++)
		cout << fArray2[i] << "\t";
	delete[] fArray;
	delete[] fArray2;
	return 0;
}