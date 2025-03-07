#include<bits/stdc++.h>
#include<string>
class classQueue
{
    public:
    int n;
    char arr[];
    int insert()
    {
        cout<<"Enter the number of elements: ";
        cin>>n;
        cout<<"enter "<<n<<" elements of the queue: ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (i>n)
            {
                cout<<"stack overflow";
            }
        }
        return 0;
    }
    int del()
    {
        int m;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        return 0;
    }
    int display()
    {
        for (int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cout<<"stack underflow";
            }
            else
            {
                cout<<arr[i]<<"\t";
            }
        }
        return 0;

    }
    void search()
    {
        int p;
        cout << "Enter the element you want to search: ";
        cin >> p;
    
        for(int i=0;i<n;i++)
        {
            if(arr[i]==p)
            {
                cout<<"element found at the position: "<<i;
                return ;
            }
        }
        cout<<"element not found";
    }
};

