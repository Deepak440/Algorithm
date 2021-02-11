
//C ++ Program to display  fist n numbers using recurrsion

#include <iostream>
using namespace std;


// Print numbers function
void Print_number(int n)
{
	if(n > 0)
	{
		Print_number(n -1);
		cout << n << " ";
	}
}

int main()
{
	int n;
	cout << "Enter the number \n";
	cin >> n;
	// function call
	Print_number(n);
	return 0;

}