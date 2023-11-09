// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// Question Link GFG (Easy): https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1

void MyStack :: push(int x)
{
    this->top++;
    arr[this->top] = x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(this->top == -1) return -1;
    
    int temp = arr[this->top];
    
    this->top--;
    
    return temp;
    
}