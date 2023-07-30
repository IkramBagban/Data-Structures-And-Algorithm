#include <iostream>
using namespace std;

// Q1 - find Sum of even number

// by ikram 
// int sumOfEvenNumber(int n)
// {
    // cout << "Ikraṃ" << endl
//     int sum;
//     sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         // cout << i << endl;
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//         return sum;
// }

// by Love Babbar - more optimized 
// int sumOfEvenNumber(int n)
// {
    // cout << "love babbar" << endl
//     int sum = 0;
//     for (int i = 2; i <= n; i += 2) // Increment i by 2 in each iteration
//     {
//         //  cout << i << endl;
//         sum += i;
//     }
//     return sum;
// }


// by bing
int sumOfEvenNumber(int n)
{
    cout << "BING" << endl;
    // Use the formula to calculate the sum
    // for ex : 10 

    return (n / 2) * (n / 2 + 1);
    // (10/2)*(10/2+1)
    // (5)*(5+1)
    // 5* 6
    // 30

    // let take another ex : n = 11
    // (11/2)*(11/2+1)
    // (5)*(5+1)
    // 5* 6
    // 30

}

// by chatGPT
// int sumOfEvenNumber(int n)
// {
//     cout << "chatgpt" << endl;
//     int lastTerm = (n % 2 == 0) ? n : n - 1;

//     // for ex : n = 10
//     int sum = (lastTerm / 2) * (2 + lastTerm) / 2;
//     // sum = (10/2) * (2+10) /2
//     // sum = (5* 12)/2
//     // sum = 60 /2 = 30
//     // sum = 30
//     return sum;
// }





int main()
{


// Q1 - Sum of even number function call
// int n,sum;
// cout << "Enter the number";
// cin >> n ;
//  sum = sumOfEvenNumber(n);
// cout << endl << "Sum of even number to " << n << "th number is "<< sum; 
cout << 11/2;

    return 0;
}
