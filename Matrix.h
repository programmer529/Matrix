#pragma once

#include <iostream>
#include <vector>

class Matrix
{
private:
	std::vector <int> matrix;
	int col, row;

	int index(int colP, int rowP) const //функция для индексации матрици
	{
		return colP * col + rowP;
	}

public:
	Matrix(int colP, int rowP) : col{colP}, row{rowP}
	{
		matrix.resize(colP * rowP);
		for (int i = 0; i < colP * rowP; i++) //заполнение матрици слчайными числами
		{
			matrix[i] = rand() % 10 + 1;
		}
	}
	Matrix() : Matrix{ 0, 0 }{}

	int& operator ()(int colP, int rowP) 
	{
		return matrix[index(colP, rowP)];
	}
	int operator ()(int colP, int rowP) const
	{
		return matrix[index(colP, rowP)];
	}

	friend std::ostream& operator << (std::ostream& output, const Matrix& matrixP);

	Matrix& operator += (Matrix matrix);
	Matrix& operator -= (Matrix matrix);
	Matrix& operator *= (Matrix matrix);
};