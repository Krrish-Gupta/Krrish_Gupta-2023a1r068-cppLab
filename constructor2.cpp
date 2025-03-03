#include<iostream>
using namespace std;
class student
{
    string rollno,name,section;
    public:student(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll number: ";
        cin>>rollno;
        cout<<"Enter the section: ";
        cin>>section;
        display();
    }
public: void display()
{
    cout<<"\n Your name is: "<<name;
    cout<<"\n Your roll number is: "<<rollno;
    cout<<"\n Your section is: "<<section;
}
public: ~student()
{
    cout<<"\nDestroyed";
}
};
int main()
{
    student obj;
    return 0;
}