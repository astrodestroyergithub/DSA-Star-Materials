/* My space for testing and learning */

#include<stdio.h>

int main()
{
    typedef auto int AI; AI var=100;
    printf("var=%d",var);
    return 0;
}

/* The question is given below:

#include<stdio.h>

int main()
{
    typedef auto int AI; AI var=100;
    printf("var=%d",var);
    return 0;
}

Find the output
(a) var=100
(b) var=AI
(c) var=0
(d) Error 

Ans: (d) Error */