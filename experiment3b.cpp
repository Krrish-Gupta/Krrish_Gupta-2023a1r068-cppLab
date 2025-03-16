//Pass by value and pass by reference
#include<iostream>
using namespace std;
class Student {
public:
    string studentName;
    int studentID;
    float Marks;

    Student(string Name, int id, float Mark) {
        studentID = id;
        studentName = Name;
        Marks = Mark;
    }

    void Display() {
        cout << "\nName = " << studentName 
             << "\tStudent ID = " << studentID 
             << "\tStudent Marks = " << Marks;
    }
};
void Semester1(Student sem1){
    sem1.Marks =400;
    cout<<" Marks of semester1 is "<<sem1.Marks; 
}
void Semester2(Student sem2){
    sem2.Marks=450;
    cout<<"\n Marks of semester2 is "<<sem2.Marks; 
}
void Delete(Student *obj){
    cout<<"\n No Student Record Found";
    obj->Marks=0;
    obj->studentName="";
    obj->studentID=0;
}
int main(){
    Student obj = {"Ram", 101, 450};
    Semester1(obj);
    obj.Display();
    Semester2(obj);
    obj.Display();
    Delete(&obj);
    obj.Display();

}