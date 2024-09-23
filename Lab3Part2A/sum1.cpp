#include <iostream>

int main()
{
	//declare variables
	double x;
	double y;

	//Ask user for input
	std::cout << "Enter a value for X:" << std::endl;
	std::cin >> x;
	std::cout << "Enter a value for Y:" << std::endl;
	std::cin >> y;
	// pointer to x and y
	double* ptrX = &x;
	double* ptrY = &y;

	double sum = *ptrX + *ptrY;

	// Display x, y and the sum
	std::cout << "x = " << *ptrX << std::endl;
	std::cout << "y = " << *ptrY << std::endl;
	std::cout << "Sum = " << sum << std::endl;

	return 0;

}