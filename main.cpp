#include <iostream>

int digits(float num)
{
	int numInteger = static_cast<int>(std::trunc(num));
	int digits = 0;
	while (numInteger)
	{
		numInteger /= 10;
		digits++;
	}
	return digits;
}

float squareRoot(float num, int precision = 2)
{
	float guess = num / 2;
	for (int i = 0; i < precision; i++)
	{
		guess = (guess + num / guess) / 2;
	}
	return guess;
}

int main()
{
	float num;
	int precision;
	std::cin >> num;
	std::cin >> precision;
	std::cout << squareRoot(num, precision);
}