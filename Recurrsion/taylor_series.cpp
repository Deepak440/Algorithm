
// C++ Program to write taylor series
// e^x = 1 + x/1 + x^2/(1*2) + x^3/(1*2*3) ... 

#include <iostream>
using namespace std;

//Function defination
double e(int x, int n)
{
	static double  f= 1 ,p = 1;
	double r;
	if(n == 0)
	{
		return 1;
	}
	else
	{
       r = e(x , n -1);
       p = p*x;
       f = f*n;
       return r + p/f;
	}

}

int main()
{
	int x ,n;
	cout << "Enter the value \n";
	cin >> x;
	cout << "Enter the number of terms up to which accuracy is needed\n";
    cin >> n;
	cout << e(x, n)<< "\n";
	return 0;
}  