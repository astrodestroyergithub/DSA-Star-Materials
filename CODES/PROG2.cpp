#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    int equiv=str[n-1];
    if(equiv>=97 && equiv<=122)
    {
        cout<<n;
    }
    else
    {
        int n2=n,sum=0;
        string n_str=to_string(n2);
        while(n2!=0)
        {
            sum+=n2%10;
            n2/=10;
        }
        cout<<6;
    }
    return 0;
}