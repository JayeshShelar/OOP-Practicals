#include<iostream>

using namespace std;

template<class T>
void bubble_sort(T a[],int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

template<class S>
void display(S arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[10]={4,3,2,66,7,34,98,11,56,12};
	float arr2[5]={5.5,3.2,1.2,9.8,11.1};

	cout<<"\nBefore sorting integer array: ";
	display(arr,10);	

	bubble_sort<int>(arr,10);
	
	cout<<"\nAfter sorting integer array: ";
	display(arr,10);

	cout<<"\nBefore sorting float array: ";
	display(arr2,5);	

	bubble_sort<float>(arr2,5);
	
	cout<<"\nAfter sorting float array: ";
	display(arr2,5);

	return 0;
}