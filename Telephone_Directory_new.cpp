#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Directory
{
public:
	char name[30];
	long number;

public:
	void get_data()
	{
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the number: ";
		cin>>number;
	}

	void display_data()
	{
		cout<<"\nName: "<<name;
		cout<<"\nNumber: "<<number;
	}


};

int main()
{
	int ch;
	char ch2;
	Directory obj;
	fstream file;

	do
	{
		cout<<"\n*********TELEPHONE DIRECTORY**********";
		cout<<"\n1.Add new contact\n2.Display all contacts\n3.Search contact\n4.Update\n>>";
		cin>>ch;

		switch(ch)
		{
			case 1:
			{
				file.open("Contact.txt",ios::app|ios::binary|ios::out);
				obj.get_data();
				file.write((char *)&obj,sizeof(obj));
				cout<<"\nContect Saved!!";
				file.close();
				break;
			}

			case 2:
			{
				file.open("Contact.txt",ios::binary|ios::in);
				while(file)
				{
					file.read((char *)&obj,sizeof(obj));
					if(file)
						obj.display_data();
				}
				file.close();
				break;
			}

			case 3:
			{
				file.open("Contact.txt",ios::binary|ios::in);
				int input;
				char n[30];
				long num;
				int flag=0;

				cout<<"Search by\n1.Name\n2.Number\n>>";
				cin>>input;

				switch(input)
				{
					case 1:
					{
						cout<<"\nEnter the name to search: ";
						cin>>n;
		
		                
		                while(file)
		                {
		                	file.read((char *)&obj,sizeof(obj));

		                	//cout<<"in while";
			                if (!strcmp(obj.name,n))
			                {
			                    cout << "Contact found!!";
			                    obj.display_data();
			                    flag++;
			                    break;
			                }
			            }
			            if(flag==0)
			            {
		            		cout <<"Contact not found!!";		            	
			            }

			            break;					
					}

					case 2:
					{
						cout<<"\nEnter the number to search: ";
						cin>>num;
		
						//file.read((char *)&obj,sizeof(obj));
		                
		                while(file)
		                {
		                	file.read((char *)&obj,sizeof(obj));
			                if (obj.number==num)
			                {
			                    cout << "Contact found\n";
			                    obj.display_data();
			                    break;
			                }
			            }
			            cout<<"Contact not found!!";
			            break;					
					}
				}
				file.close();
				break;
			}

			case 4:
			{
				file.open("Contact.txt",ios::binary|ios::in|ios::out);
				int input;
				char n[30];
				long num;
				int flag=0;
				int i=0;

				cout<<"Search by\n1.Name\n2.Number\n>>";
				cin>>input;

				switch(input)
				{
					case 1:
					{
						cout<<"\nEnter the name to Update: ";
						cin>>n;
		
						
		                
		                while(file)
		                {
		                	file.read((char *)&obj,sizeof(obj));
			                if (!strcmp(obj.name,n))
			                {
			                    cout<<"\nEnter the new details....";
			                    obj.get_data();
			                    file.seekp(i*sizeof(obj),ios::beg);
			                    file.write((char *)&obj,sizeof(obj));

			                    cout<<"\nContact updated successfully!!";			                    
			                    flag++;
			                    break;
			                }
			                else
			                {
			                	i++;
			                }
			            }
			            if(flag==0)
			            {
		            		cout <<"Contact not found!!";		            	
			            }

			            break;					
					}

					case 2:
					{
						cout<<"\nEnter the number to Update: ";
						cin>>num;
		                
		                while(file)
		                {
		                	file.read((char *)&obj,sizeof(obj));
			                if (obj.number==num)
			                {
			                    cout<<"\nEnter the new details....";
			                    obj.get_data();
			                    file.seekp(i*sizeof(obj),ios::beg);
			                    file.write((char *)&obj,sizeof(obj));
			                    cout<<"\nContact updated successfully!!";
			                    flag++;
			                    break;
			                }
			            }
			            cout<<"Contact not found!!";
			            break;					
					}
				}
				file.close();
				break;
			}			
		}

		cout<<"\nDo you want to continue??\n>>";
		cin>>ch2;
	}while(ch2=='y'||ch2=='Y');
	
	return 0;
}