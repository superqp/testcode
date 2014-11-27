#include<iostream>
#include<stdlib.h>
using namespace std;

void fun(int status, void * arg)
{
    cout << "status: " << status << endl;
    cout << "arg: " << (char *)arg << endl;
}

int main()
{
    // Last in first out.
    on_exit(fun, (void *)"First.");
    on_exit(fun, (void *)"Second.");
    exit(1);//return 1;
}

