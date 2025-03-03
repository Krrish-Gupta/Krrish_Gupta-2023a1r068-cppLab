/*Program to demonstrate working of constructor with parameters*/
#include<iostream>
using namespace std;
class Program
{
    public : Program(string name,int MobNo)
    {
        cout<<"Name is "<<name;
        cout<<"\nMobile Number is " <<MobNo;
    }
};
int main()
{
    string nm;
    int mob;
    cout<<"Enter name and Mobile Number";
    cin>>nm>>mob;
    Program obj(nm,mob);
    return 0;
}
