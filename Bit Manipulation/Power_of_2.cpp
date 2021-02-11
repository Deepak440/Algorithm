
// Program to find wheather a number is power of 2 or not

// Approch 1: Simply take the log a number base 2
//            if the coming number is a natural number then it is the power of 2



// Approch 2 : Let a number n if it is 1,2,4,8,16... are the power of 2.
//           left all the number are not the power of 2
//           1  : 1
//           2  : 10
//           3  : 11
//           4  : 100
//           5 :  101  :--> All the number having only single 1 in binary form are power of 2 .

//         logic :  while(n > 0) if((n >> 1 & 1))  count ++;
//                  if count == 1 then power of 2   
//                  complexity :  O(log2(n)) 


#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int n;
	cin >> n;
	while(n > 0)
	{
	  	n = n >> 1;
		if(n & 1)
		{
			count ++;
		
		}
	}
	if(count == 1)
	{
		cout << "Power of 2";
	}
	else
	{
		cout << "Not the power of 2";
	}
	return 0;

}