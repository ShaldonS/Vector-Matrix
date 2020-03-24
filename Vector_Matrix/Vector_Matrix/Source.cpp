#include <iostream>
#include <vector>
#include "vector.h"
#include "matrix.h"
using namespace std;

int main(int argv, char* argc[])
{
	//�������
	int Number = 5;
	Vector vec1(2, 1, 5), vec2(3, 2, 1), Result(0,0,0);
	cout << "Vectors: " << endl;
	cout << "First vector: ";
	cout << vec1; //����� � ������� ��������� <<
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

	//�������
	long int row, col;
	int C;
	/*cout << "Matrix: " << endl;
	cout << "Input count of rows: " << endl;
	cin >> row;
	cout << "Input count of columns: " << endl;
	cin >> col;*/
	Matrix M(3,3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			M.Element(i, j) = i + j;
	}
	cout << "Matrix: " << endl << M << endl;//����� � ������� ��������� <<
	/*cout << "Input count of rows(Matrix 1): " << endl;
	cin >> row;
	cout << "Input count of columns(Matrix 1): " << endl;
	cin >> col;*/
	Matrix M1(2,2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			M1.Element(i, j) = i + j;
	}
	cout << "Matrix M1: " << endl;
	M1.Show();//����� ������ � ������� �������
	cout << endl;

	/*cout << "Input count of rows(Matrix 2): " << endl;
	cin >> row;
	cout << "Input count of columns(Matrix 2): " << endl;
	cin >> col;*/
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


	/*cout << "Input count of rows: " << endl;
	cin >> row;
	cout << "Input count of columns: " << endl;
	cin >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			M.Element(i, j) = i + j;
	}
	M.Show();
	cout << "Input count of rows(Matrix 1): " << endl;
	cin >> row;
	cout << "Input count of columns(Matrix 1): " << endl;
	cin >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			M1.Element(i, j) = i + j;
	}
	M1.Show();

	cout << "Input count of rows(Matrix 2): " << endl;
	cin >> row;
	cout << "Input count of columns(Matrix 2): " << endl;
	cin >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			M2.Element(i, j) = i + j;
	}
	M2.Show();*/

	cout << "Multiply is:" << endl;
	(M1 * M2).Show();

	//��������� �� �����
	cout << "Input count of rows: " << endl;
	cin >> row;
	cout << "Notice: The number of rows must be greater than or equal to the number of columns" << endl;
	cout << "Input count of columns: " << endl;
	cin >> col;
	Matrix Ms(row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			Ms.Element(i, j) = i + j;
	}
	Ms.Show();
	cout << endl << "Input number for multiply: ";
	cin >> C;
	cout << "Result of multiplication: " << endl;
	Ms.Multiply(C);
	Ms.Show();
	system("PAUSE");
	return 0;
}
