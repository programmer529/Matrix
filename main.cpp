#include <iostream>
#include <vector>
#include "Matrix.h"

int main()
{
	srand(time(NULL));
	
	Matrix matrix1{ 5, 5 };
	Matrix matrix2{ 5, 5 };

	std::cout << "matrix1\n";
	std::cout << matrix1;
	std::cout << "\n\nmatrix2\n";
	std::cout << matrix2;
	matrix1 += matrix2;

	std::cout << "\n\nmatrix1 + matrix2\n";
	std::cout << matrix1;
}