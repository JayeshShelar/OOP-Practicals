#include<iostream>

using namespace std;

class Personal
{
private:
	int age;
	char name[30];

public:
	void get_data()
	{
		cout<<"Enter the Name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
	}

	void display_data()
	{
		cout<<"\nName: "<<name;
		cout<<"\nAge: "<<age;
	}
};

class Academic
{
private:
	char dept[30];
	int percent;

public:
	void get_data()
	{
		cout<<"Enter the department: ";
		cin>>dept;
		cout<<"Enter the percent: ";
		cin>>percent;
	}

	void display_data()
	{
		cout<<"\nDepartment: "<<dept;
		cout<<"\nPercentage: "<<percent;
	}
};

class Professional
{
private:
	int salary;
	char company[30];

public:
	void get_data()
	{
		cout<<"Enter the Company: ";
		cin>>company;
		cout<<"Enter the Salary: ";
		cin>>salary;
	}

	void display_data()
	{
		cout<<"\nCompany: "<<company;
		cout<<"\nSalary: "<<salary;
	}

};

class Biodata:public Personal,public Academic,public Professional
{
public:
	void get_data()
	{
		Personal::get_data();
		Academic::get_data();
		Professional::get_data();
	}

	void display_data()
	{
		Personal::display_data();
		Academic::display_data();
		Professional::display_data();
	}
};

int main()
{
	Biodata b;

	b.get_data();
	b.display_data();

	return 0;
}