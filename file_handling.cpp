#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	char c;
	ofstream of("file.txt",ios::out);

	cout<<"Enter the content to write in the file....(Enter # to stop)";
	cin>>c;

	while(c!='#')
	{
		of<<c;
		cin>>c;
	}
	cout<<"\nData written to file successfully!!";
	of.close();

	ifstream ifs("file.txt",ios::in);

	cout<<"\nThe contents of file are: \n";
	while(ifs)
	{
		c=ifs.get();
		if(c!='#')
		{
			cout<<c;	
		}		
	}
	ifs.close();
	
	return 0;
}