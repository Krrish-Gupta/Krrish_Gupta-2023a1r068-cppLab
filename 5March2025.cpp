//  Program to demonstrate working of Passing object as parameter to function
//  Pass by value
#include<iostream>
using namespace std;
class Program{
    public : int a;
    public : Program(int b){ // parameterized constructor of Program class       
        a = b;
    }
    public : void display(){
        cout <<"\n Value of a is "<<a;
    }
};
void modify(Program obj2){ // Modify function obj as parameter
    obj2.a=10; // Any change inside this function will not modify original value of a
    // this will create separate instance of a Program class 
}
int main(){
    Program obj1(9); // original object of a class with initialization of parametrized constructor 
    obj1.display();
    modify(obj1);
    obj1.display();  
    return 0;
}
// Pass by reference
// #include<iostream>
// using namespace std;
// class Program{
//     public : int a;
//     public : Program(int b){ // parameterized constructor of Program class       
//         a = b;
//     }
//     public : void display(){
//         cout <<"\n Value of a is "<<a;
//     }
// };
// void modify(Program &obj2){ // Modify function obj as parameter
//     obj2.a=10; // Any change inside this function will not modify original value of a
//     // this will create separate instance of a Program class 
//     cout << "\n Modified value is "<<obj2.a;
// }
// int main(){
//     Program obj1(9); // original object of a class with initialization of parametrized constructor 
//     obj1.display();
//     modify(obj1);
//     obj1.display();  
//     return 0;
// }
