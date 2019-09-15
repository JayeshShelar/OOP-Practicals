#include<iostream>

using namespace std;

class Student
{
private:
	int rno,age;
	char name[30];
	static int total;

public:
	void get_data()
	{
		total++;
		rno=total;

		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the age: ";
		cin>>age;
	}

	void display_data()
	{
		cout<<"\n\nRoll: "<<rno<<"\nName: "<<name<<"\nAge: "<<age;
	}

	static void display_total()
	{
		cout<<"\nTotal students in class are: "<<total;
	}
};

int Student::total=0;

int main()
{
	Student s[5];

	for(int i=0;i<5;i++)
	{
		s[i].get_data();
	}

	for(int i=0;i<5;i++)
	{
		s[i].display_data();
	}

	Student::display_total();

	return 0;
}
