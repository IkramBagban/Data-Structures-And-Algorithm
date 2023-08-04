#include <iostream>
using namespace std;


 float circle_area(float radius)
    {
        float area = 3.14 * radius * radius;
        return area;
    }

int main()
{

    //    Q - Find area of circle ( pi r * r)

    int radius;
    cin >> radius;
    float area = circle_area(radius);
    cout << "area of circle is " << area;
   

    return 0;
}
