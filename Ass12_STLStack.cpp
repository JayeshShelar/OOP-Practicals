#include<iostream>
#include<list>

using namespace std;

void display(list<int> &l)
{
	int c;
	list<int>::iterator i;

	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i;
	}
}

int main()
{
	list<int> s;
	list<int> q;
	int ch,ele;

	do
	{
		cout<<"\n\n***************STL STACK AND QUEUE*************\n\n";
		cout<<"1.Push into Stack\n2.Pop from Stack\n3.Display Stack\n4.Push into Queue\n5.Pop from Queue\n6.Display Queue\n7.Display Top of Stack\n8.Display Rear of Queue\n9.Exit\n>>";
		cin>>ch;

		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter element to push: ";
				cin>>ele;
				s.push_back(ele);
				break;
			}

			case 2:
			{
				ele=s.back();
				s.pop_back();
				cout<<"\n"<<ele<<" popped!";
				break;
			}

			case 3:
			{
				display(s);
				break;
			}

			case 4:
			{
				cout<<"\nEnter element to push: ";
				cin>>ele;
				q.push_back(ele);
				break;
			}

			case 5:
			{
				ele=q.back();
				q.pop_front();
				cout<<"\n"<<ele<<" popped!";
				
				break;
			}

			case 6:
			{
				display(q);
				break;
			}

			case 7:
			{
				ele=s.back();
				cout<<"\nTop element is: "<<ele;
				break;
			}

			case 8:
			{
				ele=q.back();
				cout<<"\nRear element is: "<<ele;
				break;
			}
		}
	}while(ch!=9);

	return 0;
}

