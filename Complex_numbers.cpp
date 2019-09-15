#include<iostream>
#include<math.h>

using namespace std;

class Complex
{
private:
	float real,imag;

public:
	Complex operator+(Complex n2)
	{
		Complex n3;

		n3.real=real+n2.real;
		n3.imag=imag+n2.imag;

		return n3;	
	}

	Complex operator-(Complex n2)
	{
		Complex n3;

		n3.real=real-n2.real;
		n3.imag=imag-n2.imag;

		return n3;	
	}

	Complex operator*(Complex n2)
	{
		Complex n3;

		n3.real=(real*n2.real)-(imag*n2.imag);
		n3.imag=(real*n2.imag)+(imag*n2.real);

		return n3;	
	}

	Complex operator/(Complex n2)
	{
		Complex n3;

		n3.real=(((real)*(n2.real))+((imag)*(n2.imag)))/(pow(n2.real,2)+pow(n2.imag,2));
		n3.imag=(((n2.real)*(imag))-((real)*(n2.imag)))/(pow(n2.real,2)+pow(n2.imag,2));

		return n3;	
	}

	void get_data()
	{
		cout<<"\nEnter the real part: ";
		cin>>real;
		cout<<"Enter the imag part: ";
		cin>>imag;
	}

	void display_data()
	{
		cout<<"("<<real<<")"<<"+"<<"("<<imag<<")"<<"i";
	}
};

int main()
{
	Complex n1,n2,n3;

	n1.get_data();
	n2.get_data();

	n3=n1+n2;
	cout<<"\nAddition is: ";
	n3.display_data();

	n3=n1-n2;
	cout<<"\nSubtraction is: ";
	n3.display_data();

	n3=n1*n2;
	cout<<"\nMultiplication is: ";
	n3.display_data();

	n3=n1/n2;
	cout<<"\nDivision is: ";
	n3.display_data();

	return 0;
}