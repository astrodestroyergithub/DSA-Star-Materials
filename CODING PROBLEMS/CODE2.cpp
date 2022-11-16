/* My space for testing and learning */

#include<iostream>
#include<cstring>
using namespace std;

int hash2(char *str)
{
    return strlen(str);
}

int main() {
    char str[10][10]={{'h','e','l','l','o'},{'g','o','o','d'}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;str[i][j];j++)
            cout<<*(str[i]+j);
        cout<<" "<<hash2(str[i]);
        cout<<"\n";
    }
    return 0;
}

/* The question is given below:

int hash(char *str)
{
    return strlen(str);
}

See this implementation of a hash function. It will be used for putting C-style null-terminated char * string in a hashtable:

Which of the following statements are true?
(a) This is an invalid hash function, because hash function should return a bitmap
(b) This is a good hash function because it returns different values for different strings
(c) This is a bad hash function because it returns the same value for all strings of the same length
(d) This will cause the hashtable implementation to crash because it can return the same hash value for different strings
(e) This will cause the hashtable implementation to be inefficient because it will cause the same hash value to be returned for many different strings 

Ans: */