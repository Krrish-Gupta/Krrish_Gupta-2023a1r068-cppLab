/*Program to demonstrate the concept of function overloading
Create a class with name shapes , create a function with name Area(),with area function calculate the area of circle,triangle,rectangle using function overloading
*/
#include<iostream>
using namespace std;
class Shapes{
    private : float res=0;float l1;float b;
    public : void Area(float radius){
        res =3.14*radius*radius;
        cout<<"\n Area of circle is :"<<res;
    }
    public: void Area(float l,float h){
        res = 0.5*l*h;
        cout<<"\n Area of triangle is :"<<res;
    }
    public : void Area()
    {
        l1=6,b=9;
        res = l1*b;
        cout<<"\n Area of the rectangle is :"<<res;
    }
};
int main(){
    Shapes obj;
    obj.Area();
    obj.Area(5);
    obj.Area(6,9);
    return 0;
}