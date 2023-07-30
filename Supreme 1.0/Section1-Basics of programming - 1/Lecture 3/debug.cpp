#include <iostream>
using namespace std;

int main()
{
  

// -----------------------------------------------------------------------------------------------------------------------------------

//   6. **[Print Numeric Hollow Inverted Half Pyramid](https://mycareerwise.com/storage/editor/images/Inverted%20Hollow%20Right%20Number%20Triangle.png) (Click the hyper link to understand the output)**
// 12345
// 2  5
// 3 5
// 45
// 5


    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=j+1;j<=n;j++){
            if(j==i+1 || j == n - i - 1 || i == 0){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
// ---solution
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
// -----------------------------------------------------------------------------------------------------------------------------------
    return 0;
};
