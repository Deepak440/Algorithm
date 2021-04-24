

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

void Selection_sort(int arr[] , int n)
{
    for(int i = 0;  i < n -1; i++)
    {
    	int k = i;
    	for(int j = i+ 1; j <n; j++)
    	{
    		if(arr[k] > arr[j])
    		{
    			k = j;
    		}
    	}

    	// Swap 
    	int temp = arr[k];
    	arr[k] = arr[i];
    	arr[i] = temp;
    }
}

int main()
{
	int arr[] = {8 ,2 ,7, 3 ,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    cout << "Previsous Array\n";
    Display_array(arr ,n);


    cout << "Sorted array\n";
    Selection_sort(arr , n);

    Display_array(arr , n);


	return 0;
}