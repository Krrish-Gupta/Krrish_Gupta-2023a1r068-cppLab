// Program to demonstrate the working of Passing object as parameter
// Using different methods
// 1. Pass by value
// 2. Pass by reference
// 3. Pass by pointer
// 4. Pass by const reference
#include<iostream>
using namespace std;
class program{
    public : int a = 10;
    public : void display(){
        cout<<"\n Value of a in class :"<<a;
    }
};
void method1(program obj1){ //pass by value 
    obj1.a=2; // any changes in this function will not modify the original value
    cout<<"\n Value of a in method1 : "<<obj1.a;
}
void method2(program &obj){  //pass by reference 
    obj.a=3; // changes in this function will modify the original value
    cout<<"\n Value of a in method2 : "<<obj.a;
}
void method3(program *pobj){ //  pass by pointer
    pobj->a=4; 
    cout<<"\n Value of a in method3 : "<<pobj->a;
}
void method4( const program obj2){
    // obj2.a  = 5;
    // this will generate the error (we can only read data but not modify)
    cout<<"\n value of a in method 4 : "<<obj2.a;
}
int main(){
    program obj;
    obj.display();
    method1(obj);
    method2(obj);
    obj.display(); 
    method3(&obj);
    obj.display();
    method4(obj);
    obj.display();
    return 0;
}