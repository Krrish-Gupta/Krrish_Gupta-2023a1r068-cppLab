// To create a student class , its constructor , destructor and its functions
#include<iostream>
using namespace std;
class student
{
    public : string student_name; int student_id;
    float marks,per;
    public:student(string name, int id , float mark){
        student_name = name;
        student_id = id;
        marks = mark;
    }
public: void display()
{
    cout<<"\t Information Entered by the student is :";
    cout<<"Name = "<<student_name<<"\t Marks = "<<marks;
}
};
int main()
{
    student obj[3] = {{"Ram",101,450},{"Sham",102,480},{"Sita",103,350}};
    int i;
    for(i=0;i<3;i++){
        cout<<"\n Information of student with id "<<obj[i].student_id;
        obj[i].display();
    }
    return 0;
}