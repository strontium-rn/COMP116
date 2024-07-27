#include<iostream>
#include<string>

using namespace std;

struct Student{
    string name;
    int age, marks;
};

void getStudentsInput(Student* students, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name of the student"<<i+1<<endl;
        cin>>students[i].name;
        cout<<"Enter age of the student"<< i+1<<endl;
        cin>>students[i].age;
        cout<<"Enter marks of the student"<<i+1<<endl;
        cin>>students[i].marks;
    }    
}

Student findTopStudent(Student* students, int n){
    Student topStudent = students[0];
    for (int i = 1; i < n; i++)
    {
        if (students[i].marks>topStudent.marks)
        {
            topStudent = students[i];            
        }        
    }
    return topStudent; 
    
}

void bubbleSortbyMarks(Student* students, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (students[j].marks>students[j+1].marks)
            {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }            
        }        
    }    
}



int main(){
    const int numStudents = 3;
    Student students[numStudents];
    getStudentsInput( students, numStudents);
    Student topStudent = findTopStudent(students, numStudents);
    cout<<"Top student is "<<topStudent.name<<"with "<<topStudent.marks<<"marks"<<endl;
    bubbleSortbyMarks(students, numStudents);

    cout<<"Students sorted by their marks:"<<endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout<<students[i].name<<" "<<students[i].age<<" "<<students[i].marks<<endl;
    }
    
    return 0;
}



