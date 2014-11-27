#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a[8];
    
    printf("a: %x\n", a);
    printf("&a: %x\n", &a); //The same result as printf("a: %x\n", a).
    printf("&a[0]: %x\n", &a[0]);
    printf("&a[1]: %x\n", &a[1]);
    return 0;
}

