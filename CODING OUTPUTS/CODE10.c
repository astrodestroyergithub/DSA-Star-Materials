/* My space for testing and learning */

#include<stdio.h>

#define MOBILE 0x01
#define LAPPY 0x02

int main()
{
    unsigned char item=0x01;
    item|=MOBILE;
    item|=LAPPY;
    printf("I have purchased ...:");
    if(item & MOBILE)
    {
        printf("Mobile, ");
    }
    if(item & LAPPY)
    {
        printf("Lappy");
    }
    return 1;
}

/* The question is given below:

#include<stdio.h>

#define MOBILE 0x01
#define LAPPY 0x02

int main()
{
    unsigned char item=0x01;
    item|=MOBILE;
    item|=LAPPY;
    printf("I have purchased ...:");
    if(item & MOBILE)
    {
        printf("Mobile, ");
    }
    if(item & LAPPY)
    {
        printf("Lappy");
    }
    return 1;
}

Find the output
(a) I have purchased ...:
(b) I have purchased ...:Mobile, Lappy
(c) I have purchased ...:Mobile
(d) I have purchased ...:Lappy

Ans: (b) I have purchased ...:Mobile, Lappy */