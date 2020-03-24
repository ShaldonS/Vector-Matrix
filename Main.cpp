#include <iostream>
#include <vector>
#include "vector.h"
#include "matrix.h"
using namespace std;

int main()
{
  //векторы
	int Number = 5;
	Vector vec1(2, 1, 5), vec2(3, 2, 1), Result(0,0,0);
	cout << "Vectors: " << endl;
	cout << "First vector: ";
	cout << vec1; //вывод с помощью оператора <<
	cout << endl;
	cout << "Second vector: ";
	vec2.Input();
	cout << endl << "Multiplication: ";
	(vec1 * vec2).Input();
	cout << endl << "Multiplication(by a number 5) 1: ";
	(vec1 * Number).Input();
	cout << endl << "Multiplication(by a number 5) 2: ";
	(vec2 * Number).Input();
	cout << endl << "Add: ";
	(vec1 + vec2).Input();
	cout << endl << "Substraction: ";
	Result = vec1 - vec2;
	Result.Input();
	cout << endl;
	cout << endl;
	
	//матрицы
	long int row, col;
	int C;
	Matrix M(3,3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			M.Element(i, j) = i + j;
	}
	cout << "Matrix: " << endl << M << endl;//вывод с помощью оператора <<
	
	Matrix M1(2,2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			M1.Element(i, j) = i + j;
	}
	cout << "Matrix M1: " << endl;
	M1.Show();//вызов вывода с помощью функции
	cout << endl;
	
	Matrix M2(2,2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			M2.Element(i, j) = i + 3*j;
	}
	cout << "Matrix M2: " << endl;
	M2.Show();
	cout << endl;

	cout << "Substraction is:" << endl;
	(M1 - M2).Show();

	cout << "Sum is:" << endl;
	(M1+M2).Show();
	
	cout << "Multiply is:" << endl;
	(M1 * M2).Show();

	//умножение на число
	cout << "Input count of rows: " << endl;
	cin >> row;
	cout << "Notice: The number of rows must be greater than or equal to the number of columns" << endl;
	cout << "Input count of columns: " << endl;
	cin >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			M.Element(i, j) = i + j;
	}
	M.Show();
	cout << endl << "Input number for multiply: ";
	cin >> C;
	cout << "Result of multiplication: " << endl;
	M.Multiply(C);
	M.Show();
	system("PAUSE");
	return 0;
}
