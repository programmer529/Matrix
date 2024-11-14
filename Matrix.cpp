#include "Matrix.h"

std::ostream& operator << (std::ostream& output, const Matrix& matrixP)
{
	for (int i = 0; i < matrixP.col; i++)
	{
		for (int j = 0; j < matrixP.row; j++)
		{
			output << matrixP(i, j) << ' ';
		}
		output << std::endl;
	}

	return output;
}

Matrix& Matrix::operator += (Matrix matrix)
{
	if (this->col != matrix.col && this->row != matrix.row)
	{
		std::cerr << "Error";
	}
	else
	{
		for (int i = 0; i < row * col; i++)
		{
			this->matrix[i] += matrix.matrix[i];
		}

		return *this;
	}
}
Matrix& Matrix::operator -= (Matrix matrix)
{
	if (this->col != matrix.col && this->row != matrix.row)
	{
		std::cerr << "Error";
	}
	else
	{
		for (int i = 0; i < row * col; i++)
		{
			this->matrix[i] -= matrix.matrix[i];
		}

		return *this;
	}
}
Matrix& Matrix::operator *= (Matrix matrix)
{
	if (this->col != matrix.col && this->row != matrix.row)
	{
		std::cerr << "Error";
	}
	else
	{
		for (int i = 0; i < row * col; i++)
		{
			this->matrix[i] *= matrix.matrix[i];
		}

		return *this;
	}
}