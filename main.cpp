#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter A and B";
    int a, b;
    cin >> a >> b;
    cout <<" A + B = " << a + b << '\n';
    cout <<" A - B = " << a - b << '\n';
    cout <<" A * B = " << a * b << '\n';
    cout <<" A / B = " << a / b << '\n';
    if (a>b)
    {
        cout<<"max = "<<a<<'\n';
    }
    else
    {
        cout<<"max = "<<b<<'\n';
    }
    return 0;
}
