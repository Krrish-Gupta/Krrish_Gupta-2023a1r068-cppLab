#include<iostream>
using namespace std;
class result{
    public : string name; int rollno ;float marks;
    public : result(string Name,int Rollno,float Marks){
        name = Name;
        rollno = Rollno;
        marks = marks;
    }
    public : void display(){
        cout<<"\n Name ="<<name<<"\t Roll number ="<<rollno<<"\t Marks ="<<marks;
    }
};
void Semester1(result sem1){
    sem1.marks = 400;
    cout<<"\n Marks of Semester1 = "<<sem1.marks; // . is a access method 
}
void Semester2(result sem2){
    sem2.marks = 350;
    cout<<"\n Marks of Semester2 = "<<sem2.marks;
}
void Semester3(result sem1){
    sem1.marks = 450;
    cout<<"\n Marks of Semester3 = "<<sem1.marks;
}
int main(){
    result obj("abc",1,0);
    obj.display();
    Semester1(obj);
    return 0;
}