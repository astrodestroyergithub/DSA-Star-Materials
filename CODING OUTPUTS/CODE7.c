/* My space for testing and learning */

#include<stdio.h>

int main()
{
    typedef char* string;
    string myName="ABCDEFG";
    printf("myName=%s (size=%d)",myName,sizeof(myName));
    return 0;
}

/* The question is given below:

#include<stdio.h>

int main()
{
    typedef char* string;
    string myName="ABCDEFG";
    printf("myName=%s (size=%d)",myName,sizeof(myName));
    return 0;
}

Find the output
(a) myName=ABCDEFG(size=7)
(b) Error
(c) myName=ABCDEFG(size=4)
(d) myName=ABCDEFG(size=8)

Ans: (d) myName=ABCDEFG(size=8) */