#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello, DSA!" << std::endl;
    int name;
    // cout << "enter your name";
    // cin >> name;
    // cout << "hello " << name << endl;

    // if(cin>> name){
    //     cout << "hello " << "ikram";
    // };

    // if(cout << "hello"){
    //     cout << "ikram";
    // }
    // cout << endl;

    // int a;
    // cout << a;

    int n;
    // cin>>n;
    n = 5;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n - i )
            {
                cout << n;
            }
            else if (j == 1)
            {
                cout << i+1;
            }else if( i == 0){
                 cout << j;
            }
            else
            {
                cout << " ";
            }
            // cout<<"8 ";
        }
        cout << endl;
    }
    return 0;
};
