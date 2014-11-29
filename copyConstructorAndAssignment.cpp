#include<iostream>
#include<string.h>

using namespace std;

class String
{
private:
    char * m_str;
public:
    String(const char * str = NULL);
    String(const String & other);
    String & operator=(const String & other);
    void show();
    ~String()
    {
        if (NULL == m_str) return;
        delete [] m_str;
        m_str = NULL;
    }
};

String::String(const char * str)
{
    if (NULL == str)
    {
        m_str = new char[1];
        *m_str = '\0';
        return;
    }
    m_str = new char[strlen(str) + 1];
    strcpy(m_str, str);
    //m_str[strlen(str)] = '\0';
}

String::String(const String & other)
{
    m_str = new char[strlen(other.m_str) + 1];
    strcpy(m_str, other.m_str);
    //m_str[strlen(other.m_str)] = '\0';
}

String & String::operator=(const String & other)
{
    if (this == &other)
    {
        return *this;
    }
    delete [] m_str;
    
    m_str = new char[strlen(other.m_str) + 1];
    strcpy(m_str, other.m_str);
    //m_str[strlen(other.m_str)] = '\0';
}

void String::show()
{
    cout << "String: " << m_str << endl;
}

int main()
{
    String st1("fisrt one.");
    String st2("Second one.");
    String st3(st1);

    st1.show();
    st2.show();
    st3.show();

    st3 = st2; 
    st3.show();

    return 0;
}


