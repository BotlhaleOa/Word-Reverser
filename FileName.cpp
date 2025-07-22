#include<iostream>
#include<iomanip>

using namespace std;

//floating point numbers of array
void reverseArray(double arr[], int size) {

	//outputting the original array
	cout << "The original Array:";
	for (int i = 0; i < size; ++i)   
	{
		cout << arr[i];   //array is being iterated according to the size
		if (i < size - 1)cout << " ";
	}
	cout << endl;

	for (int i = 0; i < size / 2; ++i)  //The array is now being reversed
	{
		double temp = arr[i];         //temperature is being declared
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

	cout << "The reversed array: ";   //the reversed array is being output
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i];
		if (i < size - 1)cout << " ";
	}
	cout << endl << endl;
}


int main() 
{
	//case 1
	double arr1[] = { 5.8, 2.6, 9.5, 4.1, 8.2 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	reverseArray(arr1, size1);

	//case 2
	double arr2[] = { 15.3, 10.9, 1.7, 8.88, 5.5, 9.9, 10.1 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	reverseArray(arr2, size2);

	return 0;

}