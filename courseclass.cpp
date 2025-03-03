#include<iostream>
using namespace std;
class course
{
    string name,id;
    int credits;
    public:course(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the course id: ";
        cin>>id;
        cout<<"Enter the course credits: ";
        cin>>credits;
        display();
    }
public: void display()
{
    cout<<"\n Your name is: "<<name;
    cout<<"\n Your course_id is : "<<id;
    cout<<"\n Your course code is: "<<credits;
}
public: ~course()
{
    cout<<"\nDestroyed";
}
};
int main()
{
    course obj;
    return 0;
}