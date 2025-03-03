/* Program to demonstrate the working of array of object */
#include<iostream>
using namespace std;
class Program{
    private: int regno; float marks;
    public: Program(int R,float M){
        regno = R;
        marks = M;
    }
    public: void display(){
        cout<<"\n RegNumber = "<<regno<<"\t"<<"Marks ="<<marks;
    }
};
int main(){
    Program obj[3]={{101,450},{102,430},{103,440}};
    int i;
    // for(i=0;i<3;i++){
    //     obj[i].display();
    // }
     obj[1].display();
    return 0;
}