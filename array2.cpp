/*Program to demonstrate the working of array initialization and declaration using accept method*/
#include<iostream>
using namespace std;
class program{
    private: int a[10]; int i;
    public: void accept(){
        for(i=0;i<=9;i++){
            cout<<"Enter all the array elements"<<endl;
            cin>>a[i];
        }
    }
    public: void display(){
        cout<<"Array elements:"<<endl;
        for(i=0;i<=9;i++){
            cout<<"\t"<<a[i];
            cin>>a[i];
        }
    }
};
int main()
{
    program obj;
    obj.accept();
    obj.display();
    return 0;
}