#include<iostream>
using namespace std;
class program
{
    public: //access specifier 
    void display() // function definition
    {
        cout<<"Hello"; // cout is used to display message on the screen but the messagemust be enclosed inside the bracket 
        // enclosed in ""
    }
};
int main()
{
    program obj; /* syntax of object :- class name object name */
    obj.display(); // function calling syntax  object name.access method / function name();
    return 0;
}