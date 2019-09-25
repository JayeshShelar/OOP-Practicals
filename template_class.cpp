#include<iostream>

using namespace std;

template<class T>
class Vector
{
	T arr[100];
	int n;
	
public:
	void accept()
	{
		cout<<"\nEnter the size of Vector: ";
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	
	void display()
	{
		cout<<"\nDisplaying Vector data: {";
		
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"}";
	}
	
	void scalar_multiplication()
	{
		T a;
		
		cout<<"\nEnter the scalar factor: ";
		cin>>a;
		 
		for(int i=0;i<n;i++)
		{
			arr[i]*=a;
		}
		cout<<"\nAfter scalar multiplication: ";
		display();
	}
	
	void modify()
     {
        T num,n;
        int flag=0;
        
        cout<<"\nEnter the number to modify: ";
        cin>>num;
    	
    		for(int i=0;i<n;i++)
    		{
    			if(arr[i]==num)
    			{
    				cout<<"\nEnter the new value: ";
    				cin>>n;
    				arr[i]=n;	
    				flag++;
    			}
    		}
    		
    		if(flag==0)
    		{
    			cout<<"\nElement not found!!";
    		}
    		else
    		{
    			cout<<"After modification Vector is: ";
    			display();	
		}
    }	
};

int main()
{
	int ch;
	char choice; 
	Vector <int>v;
	Vector <float>v2;
	Vector <double>v3;
	Vector <long>v4;
	
	do
	{
		cout<<"\n*********MENU*********";
		cout<<"\n1.Integer\n2.Float\n3.Double\n4.Long\n>>";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				v.accept();
				v.display();
				v.scalar_multiplication();
				v.modify();
			break;
			}
			
			case 2:
			{
				v2.accept();
				v2.display();
				v2.scalar_multiplication();
				v2.modify();
			break;	
			}

			case 3:
			{
				v3.accept();
				v3.display();
				v3.scalar_multiplication();
				v3.modify();
			break;	
			}
			
			case 4:
			{
				v4.accept();
				v4.display();
				v4.scalar_multiplication();
				v4.modify();
			break;	
			}
		}
		cout<<"Do you want to continue? Enter Y\n>>";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	return 0;
}

