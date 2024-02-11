#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    //                                Pattern 1
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j += 1;

    //     }
    //     cout<<endl;

    //     i += 1;
    // }

    //                               Pattern 2

    //     while(i<=n){
    //         int j= 1;
    //         while(j<=n){
    //             cout<<j;
    //             j+=1;
    //         }
    //         cout<<endl;
    //         i+=1;
    //     }
    // }

    //                                 Pattern 3
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //     cout<<"*";
    //     j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    //                                    Pattern 4
    // while(i<=n){
    //     int j =1;
    //     int value=i;
    //     while(j<=i){
    //     cout<<value;
    //     value+=1;
    //     j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    //                                  Pattern 4
    while (i <= n)
    {
        int j = 1;
        // int value=i;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;

            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
