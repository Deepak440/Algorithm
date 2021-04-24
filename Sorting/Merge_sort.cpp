
// C++ Program implementation of Merge sort

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

void swap(int *a ,int *b)
{
	int temp;
	temp =  *a;
	*a = *b;
	*b = temp;
}

// OPtimised

void Bubble_sort(int arr[] , int n)
{
	for(int i = 0;  i < n-1; i++)
	{
		for(int j = 0; j < n-i -1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j] , &arr[j +1]);
			}
		}
	}
}

int main()
{
	int arr[] = {8 ,5 ,7, 3 ,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    cout << "Previsous Array\n";
    Display_array(arr ,n);


    cout << "Sorted array\n";
    Bubble_sort(arr , n);

    Display_array(arr , n);


	return 0;
}
