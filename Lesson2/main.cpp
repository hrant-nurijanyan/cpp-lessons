#include <iostream>

int c = 30;

int main()
{    
    int a = 20;
    {
        a = 30;
    }

    std::cout<<a<<std::endl;

}

int f()
{
    int a = 30; // Local variable

    static int b = 20; // Static storage duration
    b = 32;

}

int k()
{
}

int sum(int a, int b)
{
    int k = 20 + c;
    int l = k / 4;
    return l * a + b;
}