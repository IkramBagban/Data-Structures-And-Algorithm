#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(10);
    q.push(50);

    cout << "Queue Front :" << q.front() << endl;
    cout << "Queue Back :" << q.back() << endl;

    cout << "Is Queue Empty : " << q.empty() << endl;

    cout << endl
         << "Only One Element In Queue" << endl;
    q.pop();

    cout << "Queue Front :" << q.front() << endl;
    cout << "Queue Back :" << q.back() << endl;

    cout << "Is Queue Empty : " << q.empty() << endl;

    cout << endl
         << "No Element In Queue" << endl;
    cout << "Queue Front :" << q.front() << endl;
    cout << "Queue Back :" << q.back() << endl;

    cout << "Is Queue Empty : " << q.empty() << endl;
    return 0;
}