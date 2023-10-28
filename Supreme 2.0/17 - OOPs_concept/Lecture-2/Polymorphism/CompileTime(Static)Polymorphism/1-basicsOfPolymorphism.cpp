// # polymorphism:
// `The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.

// # Types of Polymorphism :
// 1) Compile-time Polymorphism
// 2) Runtime Polymorphism

// 1) Compile-time (static) polymorphism :
// Compile-time (static) polymorphism in C++ refers to a type of polymorphism that is resolved at compile time rather than at runtime. It is also known as "early binding" or "method overloading." In static polymorphism, the correct function or method to be executed is determined by the compiler based on the function's signature and the arguments provided during compile time. This is in contrast to dynamic (runtime) polymorphism, which is achieved through virtual functions and is determined at runtime.

// Static polymorphism is typically implemented using function overloading or operator overloading.

// 1) Function Overloading:
// Function overloading occurs when multiple functions in the same scope have the same name but different parameters. The compiler selects the appropriate function to execute based on the number and types of arguments passed to the function.
// For example:
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

// In the example above, the add function is overloaded with two versions, one for integers and one for doubles. The compiler chooses the correct version based on the argument types used at compile time.

// 2) Operator Overloading:
// C++ allows you to redefine the behavior of operators for user-defined data types. This is also a form of static polymorphism because the operator to be used is determined at compile time. For example, you can overload the + operator for custom classes:

class Demo {
   int a;
public:
   Demo(int a) : a(a) {}
   
   Demo operator+(const Demo& other) {
      return Demo(this->a + other.a);
   }
};

// Now, we can do:
Demo Demo1(3);  
Demo Demo2(4);  
Demo sum = Demo1 + Demo2;

cout << sum << endl;
