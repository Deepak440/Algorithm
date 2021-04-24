
// C++ Program implementation of Quick sort

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
int partition(int arr[] , int l ,int h)
{
	int pivot = arr[l];
	int i = l;
	int j = h;
	do
	{
		do{i++;}while(arr[i] <= pivot);
		do{j--;}while(arr[j] > pivot);
		if(i < j)
		{
			swap(&arr[i] ,&arr[j]);
		}


	}while(i < j);
	swap(&arr[l] ,&arr[j]);
	return j;
}

void Quick_sort(int arr[] ,int l , int h)
{
	int j;
	if(l < h)       // Atleast 2 elements
	{
		j =  partition(arr , l , h);
		Quick_sort(arr ,l ,j);
		Quick_sort(arr ,j+ 1, h);

	}  
}

int main()
{
	int arr[] = {8 ,5 ,7, 3 ,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    cout << "Previsous Array\n";
    Display_array(arr ,n);


    cout << "Sorted array\n";
    Quick_sort(arr ,0, n);

    Display_array(arr , n);


	return 0;
}
