
// C++ Implementation of Insertion sort in an array

#include <iostream>
using namespace std;



void Display_array(int arr[] , int n)
{
	for(int i = 0;  i< n ; i++)
    {
    	cout << arr[i] << " ";
    }
    cout << "\n";
}

void Insertion_sort(int arr[] , int n)
{
    int x, i ,j = 0;
	for( i = 1; i < n; i++)
	{
	    x  = arr[i];
	    j = i-1;
	while( j > -1  &&  arr[j] > x)
	{
	    arr[j+1] = arr[j];
	    j--;
	}
	arr[j+1] = x;
		
	}
}

int main()
{
	int arr[] = {8 ,5 ,7, 3 ,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    cout << "Previsous Array\n";
    Display_array(arr ,n);


    cout << "Sorted array\n";
    Insertion_sort(arr , n);

    Display_array(arr , n);


	return 0;
}