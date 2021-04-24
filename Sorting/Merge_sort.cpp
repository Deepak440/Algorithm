
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

void Merge(int A[] ,int l ,int mid , int h)
{
	int i = l,j = mid + 1,k = l;
	int B[100];

	while(i <= mid && j <=h)
	{
		if(A[i] < A[j])
		{
			B[k++] = A[i++];
		}
		else
		{
			B[k++] = A[j++];
		}
	}
	for(; i <= mid; i++)
	{
		B[k++] = A[i];
	}
	for( ; j <= h; j ++)
	{
		B[k++] = A[j];
	}

	for(i = l; i <= h; i++)
	{
		A[i] = B[i];
	}
}



void Merge_sort(int arr[] ,int l ,int h)
{
	int mid;
	if(l < h)
	{
		mid =  (l + h)/2;
		Merge_sort(arr ,l ,mid);
		Merge_sort(arr ,mid + 1 ,h);
		Merge(arr ,l ,mid ,h);

	}
}
int main()
{
	int arr[] = {8 ,5 ,7, 3 ,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    cout << "Previsous Array\n";
    Display_array(arr ,n);


    cout << "Sorted array\n";
    Merge_sort(arr ,0, n-1);

    Display_array(arr , n);


	return 0;
}
