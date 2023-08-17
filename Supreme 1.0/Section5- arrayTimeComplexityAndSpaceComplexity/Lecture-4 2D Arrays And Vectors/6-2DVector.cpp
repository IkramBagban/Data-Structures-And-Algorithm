#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int row = 3;
    int col = 3;
    vector<vector<int>> arr(row, vector<int>(col, -8));
    print2DVector(arr);
    cout << endl;

    vector<vector<int>> arr2{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // print 5
    cout << arr2[1][1]<< endl;

    // create a vector and take input from user
    vector<vector<int>> arr3(row, vector<int>(col, 0));

    cout << "Add elements in the 2D vector : " << endl;
    for (int i = 0; i < arr3.size(); i++)
    {
        for (int j = 0; j < arr3[i].size(); j++)
        {
            cin >> arr3[i][j];
        }
        // cout << endl<< "add for second row "<<endl;
    }

    cout << "here is the arr3" << endl;
    print2DVector(arr3);

        return 0;
}
