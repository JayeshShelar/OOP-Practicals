#include<iostream>
using namespace std;

template<class T>
class Vector
{
    T arr[10];
    int n;
    
    public:
    
    void accept()
    {
        cout<<"\nEnter size of vector\n";
        cin>>n;
        cout<<"Enter elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void display()
    {
        cout<<"\nDisplaying vector data\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    void mul()
    {
        int a;
        cout<<"Enter the scalar to multiply: ";
        cin>>a;
         for(int i=0;i<n;i++)
            arr[i]*=a;
    }

    void modify()
    {
        int index;
        cout<<"Enter the index to modify\n";
        cin>>index;
        if(index<n)
        {
            cout<<"Enter modified value";
            cin>>arr[index];
        }
        else
        {
            cout<<"Index doesnt exist";
        }
    }

    void showMenu()
    {
        int input2;
    
        do
        {
            cout<<"\n1.Accept\n2.Display\n3.Modify\n4.Multiply\n5.Exit\nEnter your choice: ";
            cin>>input2;
            
            switch (input2)
            {
            case 1:
                accept();
                break;
            case 2:
                display();
                break;
            case 3:
                modify();
                break;
            case 4:
                mul();
                break;
            case 5:
                exit(0);
            default:
                break;
            }
        }while(5);
    }
    
};

int main()
{
    int input1,input2;
    cout<<"Enter the datatype for vector\n1.INT\n2.FLOAT\n";
    cin>>input1;

    switch (input1)
    {
    case 1:
    Vector<int> a;
        a.showMenu();
        break;

    case 2:
      Vector<float> b;
        b.showMenu();
        break;
    
    default:
        break;
    }
    
    return 0;
}
