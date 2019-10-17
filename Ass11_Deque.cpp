#include<iostream>
#include<list>

using namespace std;

void display(list<int> l)
{
	list<int>::iterator i;

	for(i=l.begin();i!=l.end();i++)
	{
		cout<<*i;
	}
}

int main()
{
	list<int> deque;
	int ele,ch;

	do
	{
		cout<<"\n\n****************DEQUE OPERATIONS**************\n\n";
		cout<<"1.Insert Front\n2.Insert Rear\n3.Delete Front\n4.Delete Rear\n5.Display Deque\n6.Exit\n>>";
		cin>>ch;

		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter the element to insert: ";
				cin>>ele;
				deque.push_front(ele);
				break;
			}

			case 2:
			{
				cout<<"\nEnter the element to insert: ";
				cin>>ele;
				deque.push_back(ele);
				break;
			}

			case 3:
			{
				ele=deque.front();
				deque.pop_front();
				cout<<"\n"<<ele<<" deleted!";
				break;
			}

			case 4:
			{
				ele=deque.back();
				deque.pop_back();
				cout<<"\n"<<ele<<" deleted!";
				break;
			}

			case 5:
			{
				display(deque);
				break;
			}
		}
	}while(ch!=6);

	return 0;
}