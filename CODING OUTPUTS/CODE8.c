/* My space for testing and learning */

#include<stdio.h>

int main()
{
    typedef int AAA,BBB,CCC,DDD; AAA aaa=10;
    BBB bbb=20;
    CCC ccc=30; DDD ddd=40;
    printf("%d,%d,%d,%d",aaa,bbb,ccc,ddd);
    return 0;
}

/* The question is given below:

#include<stdio.h>

int main()
{
    typedef int AAA,BBB,CCC,DDD; AAA aaa=10;
    BBB bbb=20;
    CCC ccc=30; DDD ddd=40;
    printf("%d,%d,%d,%d",aaa,bbb,ccc,ddd);
    return 0;
}

Find the output
(a) Error
(b) 10,10,10,10
(c) 10,20,30,40
(d) AAA,BBB,CCC,DDD

Ans: (c) 10,20,30,40 */