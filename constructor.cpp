/* Program to demonstrate working of constructor */
#include<iostream>
using namespace std;
class Program         // class with name program
{
    public : Program()   //class constructor
    {
        cout<<"Constructor called";
    }
};
int main(){
    Program obj;   //class object
    return 0;
}
