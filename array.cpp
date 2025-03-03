/*Program to demonstrate the array initialization and array declaration using direct method */
#include<iostream>
using namespace std;
class ArrayProgram{
    private: int a[5];
    int b[5]={1,2,3,4,5};
    public: void display(){
        a[0]=10;
        a[1]=5;
        cout<<"\n array element at index 0 is "<<a[0];
        cout<<"\n array element at index 1 is "<<a[1];
        cout<<"\n Enter array element at index 2 is ";
        cin>>a[2];
        cout<<"\n array element at index 2 is "<<a[2];
        cout<<"\n array element at index 0 in array b is "<<b[0];
    }
};
int main(){
    ArrayProgram obj;
    obj.display();
    return 0;
}