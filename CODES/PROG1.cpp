#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    // first half
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j)
            {
                if(i!=5)
                    cout<<i<<"*";
                else
                    cout<<i;
            }
            else
            {
                cout<<"**";
            }
        }
        int n1=5;
        for(j=1;j<=4;j++)
        {
            if((n1-j)==i)
            {
                cout<<i<<"*";
                break;
            }
            else
            {
                cout<<"**";
            }
        }
        cout<<endl;
    }
    // second half
    int n2=5;
    for(i=4;i>=1;i--)
    {
        for(j=4;j>=0;j--)
        {
            if((n2-j)==i)
            {
                cout<<i<<"*";
            }
            else
            {
                cout<<"**";
            }
        }
        for(j=1;j<=4;j++)
        {
            if((n2-j)==i)
            {
                cout<<i<<"*";
                break;
            }
            else
            {
                cout<<"**";
            }
        }
        if(i!=1)
            cout<<endl;
    }
    return 0;
}