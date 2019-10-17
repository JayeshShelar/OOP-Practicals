#include<iostream>
#include<stack>

using namespace std;

stack<int> add(stack<int> &a,stack<int> &b)
{
	stack<int> c;
	int b1=0,b2=0,carry=0,sum=0;

	while(!a.empty() || !b.empty())
	{
		if(!a.empty())
		{
			b1=a.top();
			a.pop();
		}

		if(!b.empty())
		{
			b2=b.top();
			b.pop();
		}

		sum=(b1+b2+carry)%2;
		carry=(b1+b2+carry)/2;

		c.push(sum);
	}
	if(carry==1)
	{
		c.push(1);
	}
	return c;
}

void display(stack<int> a)
{
	int c;

	while(!a.empty())
	{
		c=a.top();
		cout<<c<<" ";
		a.pop();
	}
}

int main()
{
	stack<int> a;
	stack<int> b;
	stack<int>sum;
	int x;

	cout<<"Enter 1st binary number of 4 bits: ";
	for(int i=0;i<4;i++)
	{
		cin>>x;
		a.push(x);
	}

	cout<<"Enter 2nd binary number of 4 bits: ";
	for(int i=0;i<4;i++)
	{
		cin>>x;
		b.push(x);
	}

	sum=add(a,b);

	cout<<"\nAddition is: ";
	display(sum);

	return 0;
}