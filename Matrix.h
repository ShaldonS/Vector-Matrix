using namespace std;
class Matrix
{
public:
	Matrix() : m(), n() { Assign(); }
	Matrix(long int i) : m(i), n(i) { Assign(); }
	Matrix(long int i, long int j) : m(i), n(j) { Assign(); }
	Matrix operator+(Matrix&tmp);
	Matrix operator-(Matrix&tmp);
	Matrix operator*(Matrix&tmp);
	//Matrix operator=(Matrix&tmp);
	Matrix operator<<(Matrix&tmp);
	friend ostream& operator<<(ostream& out, Matrix tmp);

	long int& Element(long int i, long int j)
	{
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				Matr[i][j] = 0.01 * (rand() % 10);
		return Matr[i][j];
	}

	//умножение матрицы на число
	void Multiply(long int x)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				Matr[i][j] *= x;
	}

	//вывод на экран
	void Show()
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout.width(5);
				cout << Matr[i][j];
			}
			cout << endl;
		}
	}
private:
	long int** resMass;
	long int** Matr;
	long int** Matr1;
	long int** Matr2;
	long int m;
	long int n;

	//выделение памяти под матрицы
	void Assign()
	{
		resMass = new long int* [m];
		Matr = new long int* [m];
		Matr1 = new long int* [m];
		Matr2 = new long int* [m];
		for (int i = 0; i < m; i++)
		{
			Matr[i] = new long int[n];
			Matr1[i] = new long int[n];
			Matr2[i] = new long int[n];
			resMass[i] = new long int[n];
		}
	}
};

//сумма матриц
Matrix Matrix :: operator + (Matrix& tmp)
{
	int i, j;
	for (i = 0; i < this->n; ++i)
		for (j = 0; j < this->m; ++j)
			this->Matr[i][j] = tmp.Matr[i][j] + this->Matr[i][j];
	return *this;
}

//разность матриц
Matrix Matrix::operator - (Matrix& tmp)
{
	if (tmp.n == n && tmp.m == m)
	{
		Matrix temp(m, n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				temp.Matr[i][j] = -(Matr[i][j] - tmp.Matr[i][j]);
		return temp;
	}
}
