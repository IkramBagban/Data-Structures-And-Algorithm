#include <iostream>
using namespace std;

int main()
{

    // bool t = true;
    // bool f = true;
    // // bool f1 = false;
    // // bool f2 = false;

    // // AND(&) Operator -> both the value should be true
    // cout << "AND(&) Operator : " << endl;
    // cout << "(true & true) = " << (true & true) << endl;     // (true & true) = 1
    // cout << "(true & false) = " << (true & false) << endl;   // (true & false) = 0
    // cout << "(false & true) = " << (false & true) << endl;   // (false & true) = 0
    // cout << "(false & false) = " << (false & false) << endl; // (false & false) = 0
    // cout << endl;

    // // OR(|) Operator -> one value should be true
    // cout << " OR(|) Operator : " << endl;
    // cout << "(true | true) = " << (true | true) << endl;     // (true | true) = 1
    // cout << "(true | false) = " << (true | false) << endl;   // (true | false) = 1
    // cout << "(false | true) = " << (false | true) << endl;   // (false | true) = 1
    // cout << "(false | false) = " << (false | false) << endl; // (false | false) = 0
    // cout << endl;

    // // NOT(~) Operator ->
    // cout << "NOT (~) Operatorv : " << endl;   //
    // cout << "(~true  ) = " << ~true << endl;  // (~true  ) = -2
    // cout << "(~false ) = " << ~false << endl; // (~false ) = -1
    // cout << endl;

    // // XOR(^) Operator -> if both the value is different will output true else false
    // cout << "(true ^ true) = " << (true ^ true) << endl;     // (true ^ true) = 0
    // cout << "(true ^ false) = " << (true ^ false) << endl;   // (true ^ false) = 1
    // cout << "(false ^ true) = " << (false ^ true) << endl;   // (false ^ true) = 1
    // cout << "(false ^ false) = " << (false ^ false) << endl; // (false ^ false) = 0
    // cout << endl;

    // // Left Shift (<<) Operator -> multipy by 2 kardeta ye
    // cout << "Left Shift (<<) Operator : " << endl; 
    // cout << "(true << true) = " << (true << true) << endl;     // (true << true) = 2
    // cout << "(true << false) = " << (true << false) << endl;   // (true << false) = 1
    // cout << "(false << true) = " << (false << true) << endl;   // (false << true) = 0
    // cout << "(false << false) = " << (false << false) << endl; // (false << false) = 0

    // pre/post increament
    // int a = 5;
    // cout << (++a)*(++a); // research on this. it is outputting 49 in my system. kisi k system me 42 aarhaa

    //break continue
    // break -> terminate the loop
    // continue miss/skip the iteration


    // operator precedence
    // -> question can we use continue in switch case

  switch (1)
  {
  case 1:
    cout << "hey";
    break;
    case 5:
    cout << "lala";
    break;
    case 6:
    cout << "aa";
    break;
  
  default:
  cout << "default";
    break;
  }
   

return 0;
}