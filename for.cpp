#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int a = 0;
    int b = 1;
    int c;
    cout << a << endl;
    cout << b << endl;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout << c << endl;
    }
}