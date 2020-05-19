#include <iostream>
#include <iomanip>

template<class T>
class matrix 
{
private:
	T** Matr;
	int n, m;
public:
	matrix() {}
	int matrix_get_n() { return n; }
	int matrix_get_m() { return m; }
	T** get() { return Matr; }
	//void set(T** Matr1) { Matr = Matr1; }
	matrix(int n1, int m1);
	void Show();
	matrix(const matrix<T>& a);
	~matrix();
	matrix<T> operator==(matrix<T>& tmp);
	template <class T>
	matrix<T> operator<<(matrix<T>& tmp);
	friend ostream& operator<<(ostream& out, matrix<T> tmp);
	matrix<T> operator +(matrix<T>& b);
	matrix<T> operator -(matrix<T>& b);
	matrix<T> operator *(matrix <T>& b);

	void Multiply(long int x)
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				Matr[i][j] *= x;
	}
};

template<class T>
matrix<T>::matrix(int n1, int m1) 
{
	n = n1;
	m = m1;
	Matr = new T * [n];
	for (int i = 0; i < n; i++)
	{
		Matr[i] = new T[m];
	}
	for (int k = 0; k < n; k++) 
	{
		for (int i = 0; i < m; i++) 
		{
			Matr[k][i] = rand()%5 + 5;
		}
	}
}

template<class T>
void matrix<T>::Show()
{
	for (int k = 0; k < n; k++) 
	{
		for (int i = 0; i < m; i++) 
		{
			cout << setw(4) << Matr[k][i];
		}
		cout << endl;
	}
	cout << endl;
}

template<class T>
matrix<T>::matrix(const matrix<T>& a)
{
	n = a.n;
	m = a.m;
	Matr = new T * [n];
	for (int i = 0; i < n; i++) 
	{
		Matr[i] = new T[m];
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m; i++) 
		{
			Matr[k][i] = a.Matr[k][i];
		}
	}
}
template<class T>
matrix<T>::~matrix()
{
	for (int i = 0; i < n; i++) delete[] Matr[i];
	delete[]Matr;
}

template<class T>
matrix<T> matrix<T>::operator +(matrix<T>& b) 
{
	matrix<T> c(n, m);
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < m; i++) 
		{
			c.Matr[k][i] = b.Matr[k][i] + Matr[k][i];
		}
	}
	return c;
}

template<class T>
matrix<T> matrix<T>::operator -(matrix<T>& b) 
{
	matrix<T> c(n, m);
	for (int k = 0; k < n; k++) 
	{
		for (int i = 0; i < m; i++)
		{
			c.Matr[k][i] = Matr[k][i] - b.Matr[k][i];
		}
	}
	return c;
}


template<class T>
matrix<T> matrix<T>::operator *(matrix<T>& b) 
{
	matrix<T> c(n, m);
	for (int k = 0; k < n; k++) 
	{
		for (int i = 0; i < m; i++)
		{
			c.Matr[k][i] = 0;
			for (int j = 0; j < b.n; j++) 
			{
				c.Matr[k][i] += (Matr[k][j] * b.Matr[j][i]);
			}
		}
	}
	return c;
}

template<class T>
matrix<T> matrix<T>::operator==(matrix<T>& tmp)
{
	if (n != tmp.n || m != tmp.m)
	{
		for (int i = 0; i < m; i++)
			delete[] Matr[i];
		delete[] Matr;
		n = tmp.n;
		m = tmp.m;
		Matr = new long int* [m];
		for (int i = 0; i < m; i++)
			Matr[i] = new long int[n];
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Matr[i][j] = tmp.Matr[i][j];
	return *this;
}


ostream& operator << (ostream& out, matrix<int> tmp)
{
	if (tmp.Matr != NULL)
	{
		out << "Output: " << endl;
		for (int i = 0; i < tmp.m; i++)
		{
			for (int j = 0; j < tmp.n; j++)
			{
				cout.width(5);
				out << tmp.Matr[i][j];
			}
			out << endl;
		}
	}
	else
		out << "Empty" << endl;
	return out;
}
