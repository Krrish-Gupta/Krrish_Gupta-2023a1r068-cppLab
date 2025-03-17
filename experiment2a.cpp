#include <iostream>
#include <vector>
using namespace std;

class Course; // Forward declaration

class Student {
private:
    int studentID;       // Kept private to prevent unauthorized modification
    string name;         // Kept private to encapsulate student details
    vector<Course*> courses; // Private to maintain controlled access through methods

public:
    // Constructor
    Student(int id, string n) : studentID(id), name(n) {}

    // Public method to display student details
    void displayInfo() const {
        cout << "Student ID: " << studentID << ", Name: " << name << endl;
    }

    // Public method to enroll in a course
    void enrollInCourse(Course* course);

    // Getter for student ID (Read-only access)
    int getStudentID() const { return studentID; }

    // Getter for student name (Read-only access)
    string getName() const { return name; }
};

class Course {
private:
    int courseID;       // Private to prevent accidental modifications
    string courseName;  // Private to encapsulate course details
    vector<Student*> students; // Private to control how students are added

public:
    // Constructor
    Course(int id, string cname) : courseID(id), courseName(cname) {}

    // Public method to display course details
    void displayInfo() const {
        cout << "Course ID: " << courseID << ", Course Name: " << courseName << endl;
    }

    // Method to enroll a student (Controlled access)
    void enrollStudent(Student* student) {
        students.push_back(student);
    }

    // Getter for course ID (Read-only access)
    int getCourseID() const { return courseID; }

    // Getter for course name (Read-only access)
    string getCourseName() const { return courseName; }
};

// Implementing Student's method to enroll in a course
void Student::enrollInCourse(Course* course) {
    courses.push_back(course);
    course->enrollStudent(this); // Mutual association
}

int main() {
    Student s1(101, "Alice");
    Course c1(501, "Computer Science");

    s1.enrollInCourse(&c1);

    s1.displayInfo();
    c1.displayInfo();

    return 0;
}
