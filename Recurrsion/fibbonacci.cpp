
// C++ Program to write fibbbonacci function


#include <iostream>
using namespace std;

// Function to find fibbonacci series
// Time complexity - o(2^n)

int fibbonacci(int n)
{
	if(n <= 1)
	{
		return n;
	}
	else
	{
		return fibbonacci(n -1) + fibbonacci(n-2);

	}

}

int main()
{
	int n;
	cout << "Enter the number of terms fibbonacci series to be printed\n";
	cin >> n;
	cout << fibbonacci(n);
	return 0;
}  