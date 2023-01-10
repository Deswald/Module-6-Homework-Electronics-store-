#include "TV.h"

TV::TV(int weight, float diagonalTV, string matrix) : ConsumerEl(weight), _diagonalTV(diagonalTV), _matrix(matrix)
{
}
void TV::ShowFeatures()
{
	cout << "Weight: " << _weight << endl;
	cout << "Diagonal: " << _diagonalTV << endl;
	cout << "Matrix: " << _matrix << endl;
}