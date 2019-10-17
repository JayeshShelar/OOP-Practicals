#include<iostream>

using namespace std;

template<class T>
void selection_sort(T arr[],int n)
{
	T temp;
	int min;

	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}


int main()
{
	int arr[5];

	cout<<"\nEnter array: ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	selection_sort<int>(arr,5);

	cout<<"\nAfter sorting: ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}