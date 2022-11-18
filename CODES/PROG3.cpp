#include<iostream>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int i,tot=str1.size();
    int a=0,b=tot;
    for(i=0;i<tot;i++)
    {
        if(str1[i]==str2[i] && str1[i]!='?')
            b--;
        if(str1[i]!=str2[i] || ((str1[i]=='?' && str2[i]>='a' && str2[i]<='z') || (str2[i]=='?' && str1[i]>='a' && str1[i]<='z')))
            a++;
    }
    cout<<a<<" "<<b;
    return 0;
}