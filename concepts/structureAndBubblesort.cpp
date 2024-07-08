#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};
void inputStudentData(Student* students, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter age for student " << i + 1 << ": ";
        cin >> students[i].age;
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> students[i].marks;
    }
}
Student findTopStudent(Student* students, int n) {
    Student topStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}
void bubbleSortByMarks(Student* students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                // Swap the students
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    const int numStudents = 3;
    Student students[numStudents];

    // Input student data
    inputStudentData(students, numStudents);

    // Find and print the student with the highest marks
    Student topStudent = findTopStudent(students, numStudents);
    cout << "Top student: " << topStudent.name << " with marks " << topStudent.marks << endl;

    // Sort students by marks and print the sorted list
    bubbleSortByMarks(students, numStudents);
    cout << "Students sorted by marks:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].name << " " << students[i].age << " " << students[i].marks << endl;
    }

    return 0;
}
