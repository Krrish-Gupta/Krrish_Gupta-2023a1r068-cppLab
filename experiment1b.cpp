// // To create a student class , its constructor , destructor and its functions
// #include<iostream>
// using namespace std;
// class student
// {
//     public : string student_name; int student_id;
//     float marks,per;
//     public:student(string name, int id , float mark){
//         student_name = name;
//         student_id = id;
//         marks = mark;
//     }
// public: void display()
// {
//     cout<<"\n Information Entered by the student is :";
//     cout<<"Name = "<<student_name<<"\t Marks = "<<marks;
// }
// int Grade(){
//     per = marks/500*100;
//     if(per>=80 && per<=100){
//         cout<<"\n Your Grade is A";
//         return 1;
//     }
//     else if(per>=70 && per<80){
//         cout<<"\n Your Grade is B";
//         return 2;
//     }
//     else if(per>=60 && per<70){
//         cout<<"\n Your Grade is C";
//         return 3;
//     }
//     else if(per>=50 && per<60){
//         cout<<"\n Your Grade is D";
//         return 4;
//     }
//     else{
//         cout<<"\n Not Qualified";
//     }
// }
// void club_assignment(){
//     int grade = Grade();
//     if(grade == 1){
//         cout<<"\n Sports club is assigned";
//     }
//      else if(grade == 2){
//         cout<<"\n Eco club is assigned ";
//     }
//     else if(grade == 3){
//         cout<<"\n NSS club is assigned ";
//     }
//     else if(grade == 4){
//         cout<<"\n NCC club is assigned ";
//     }
//     else{
//         cout<<"\n No club is assigned";
//     }
// }
// };
// int main()
// {
//     student obj[5] = {{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
//     int i;
//     for(i=0;i<5;i++){
//         cout<<"\n Information of student with id "<<obj[i].student_id;
//         obj[i].display();
//         obj[i].Grade();
//         obj[i].club_assignment();
//     }
//     return 0;
// }
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
    cout<<"\n Information Entered by the student is :";
    cout<<"Name = "<<student_name<<"\t Marks = "<<marks;
}
int Grade(){
    per = marks/500*100;
    if(per>=80 && per<=100){
        cout<<"\n Your Grade is A";
    }
    else if(per>=70 && per<80){
        cout<<"\n Your Grade is B";
    }
    else if(per>=60 && per<70){
        cout<<"\n Your Grade is C";
    }
    else if(per>=50 && per<60){
        cout<<"\n Your Grade is D";
    }
    else{
        cout<<"\n Not Qualified";
    }
}
// public : ~student(){
//     cout<<"\nDestructor called";
// }
};
int main()
{
    student obj[5] = {{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i;
    for(i=0;i<5;i++){
        cout<<"\n Information of student with id "<<obj[i].student_id;
        obj[i].display();
        obj[i].Grade();
    }
    return 0;
}