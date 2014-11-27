#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
    unsigned char i = 0;
    for(; i < 255; i++) // It is infinite loop, if i less than and equal to 255.
    {
        printf("i=%u, ", i);
    }
    cout << endl;
    return 0;
}


