#include<iostream>

using namespace std;

class Calculator
{
public:
	int add(int n1,int n2)
	{
		return n1+n2;
	}
	
	int sub(int n1,int n2)
	{
		return n1-n2;
	}
	
	int mul(int n1,int n2)
	{
		return n1*n2;
	}
	
	int div(int n1,int n2)
	{
		return n1/n2;
	}
};

int main()
{
	Calculator c;
	int ch,num1,num2;
	
	cout<<"Enter the value for num1: ";
	cin>>num1;
	cout<<"Enter the value for num2: ";
	cin>>num2;

	cout<<"\n*************Menu************";
	cout<<"\n\t1.Add\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\nEnter your choice: ";
	cin>>ch;

	switch(ch)
	{
		case 1:
		{
			cout<<"Addition is: "<<c.add(num1,num2);
			break;
		}

		case 2:
		{
			cout<<"Subtraction is: "<<c.sub(num1,num2);
			break;
		}

		case 3:
		{
			cout<<"Multiplication is: "<<c.mul(num1,num2);
			break;
		}

		case 4:
		{
			cout<<"Division is: "<<c.div(num1,num2);
			break;
		}

		default:
		{
			cout<<"You entered wrong choice!!!!";
			break;
		}
	}	
	return 0;
	
}
