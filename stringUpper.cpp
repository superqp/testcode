#include<iostream>
using namespace std;

void StringUpper(char * str)
{
    if (NULL == str) return;

    while(*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        ++str;
    }
}

int main()
{
    char str[] = "abcdef";
    cout << "Before converting: " << str << endl;
    StringUpper(str);
    cout << "After converting: " << str << endl;

    return 0;
}

