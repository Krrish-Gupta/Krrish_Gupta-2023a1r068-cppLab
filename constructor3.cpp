/* Program to demonstrate working and execution sequence of constructor , destructor and other functions*/
#include<iostream>
using namespace std;
class program
{
    private: int a;
    public: void fun1(){
        cout<<"\n Function1";
    }
    public: void fun2(){
        cout<<"\n Function2";
    }
    public: program(){
        a=5;
        cout<<"\n a = <<a";
    }
    public: ~program()
    {
        cout<<"\n Destructor called";
    }
};
int main()
{
    program obj;
    obj.fun1();
    obj.fun2();
}