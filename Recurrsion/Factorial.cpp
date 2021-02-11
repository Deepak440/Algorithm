
// C++ program to find the factorial of a number

#include <iostream>
using namespace std;

// Factorial function

int Factorial(int n)
{
	if(n <= 0)
	{
		return 1;
	}
	return n *Factorial(n-1);
}

int main()
{
	int n; 
	cout << "Enter the number whose factorial is to be calculated\n";
	cin >> n;
	cout <<  Factorial(n);
	return 0;
}