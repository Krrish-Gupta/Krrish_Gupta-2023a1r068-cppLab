/* Write a program for employment management 
a. create a class with name employee 
b. create a parametrized constructor to initialize class attributes like, employee name , employee code , basic salary 
c. create a member function display() to display records on screen 
d. create a function gross_salary() which calculate components of salary like TA(3% salary of Basic salary) , DA(4% salary of Basic salary) ,
HRA(5% salary of Basic salary) , PF(4% salary of Basic salary)
Gross salary is the sum of the Basic , TA , DA ,HRA . PF is 
e. create a function update() to increment Basic salary of Employees :-
Gross salary between 10000 to  20000 ,10% increment
Gross salary between 20000 to  30000 ,15% increment
Gross salary  above 30000 ,20% increment 
f. create a function Update_Profile() , if user wants to correct its name or code 
g. create a function with name Get_Data() that only reads employee data but not able to modify user data */
#include<iostream>
using namespace std;

class Employee {
private:
    string employee_name;
    int employee_code;
    int basic_salary;

public:
    Employee(string ename, int ecode, int bsal) {
        employee_name = ename;
        employee_code = ecode;
        basic_salary = bsal;
    }
    void display() {
        cout << "\nEmployee Name: " << employee_name;
        cout << "\nEmployee Code: " << employee_code;
        cout << "\nBasic Salary: " << basic_salary;
    }
    float gross_salary() {
        float TA = 0.03 * basic_salary;
        float DA = 0.04 * basic_salary;
        float HRA = 0.05 * basic_salary;
        float PF = 0.04 * basic_salary;
        return (basic_salary + TA + DA + HRA - PF);
    }
    void update() {
        float Gross_salary = gross_salary();
        if (Gross_salary >= 10000 && Gross_salary <= 20000) {
            basic_salary += basic_salary * 0.10;
        } else if (Gross_salary >= 20000 && Gross_salary <= 30000) {
            basic_salary += basic_salary * 0.15;
        } else if (Gross_salary >= 30000) {
            basic_salary += basic_salary * 0.20;
        }
        cout << "\nSalary updated successfully.";
    }
    void Update_Profile() {
        int choice;
        cout << "\nWhat do you want to update?";
        cout << "\n1. Employee Name";
        cout << "\n2. Employee Code";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            cout << "\nEnter new Employee Name: ";
            getline(cin, employee_name);
        } else if (choice == 2) {
            cout << "\nEnter new Employee Code: ";
            cin >> employee_code;
        } else {
            cout << "\nInvalid choice.";
        }
    }
    void Get_Data() const {
        cout << "\nEmployee Name: " << employee_name;
        cout << "\nEmployee Code: " << employee_code;
        cout << "\nBasic Salary: " << basic_salary;
    }
};
int main() {
    Employee emp("John Doe", 101, 15000);
    emp.display();
    cout << "\nGross Salary: " << emp.gross_salary();
    emp.update();
    emp.display();
    emp.Update_Profile();
    emp.display();
    emp.Get_Data();
    return 0;
}