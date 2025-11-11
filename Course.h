#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
#include <iostream>

//#write your code here
class Course: public Student{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    student* students;
    int currentStudents;
public:
    Course() {
        courseCode = "0";
        courseName ="unknown";
        maxStudents = 0;
        students = nullptr;
        currentStudents =0;
    }
    Course(string cc,string cn,int ms,Student s,int cs) {
        courseCode = cc;
        courseName = cn;
        maxStudents = ms;
        students = &s;
        currentStudents =cs;
    }
    ~Course() {
    }
    void setCourseCode(string cc) {
        courseCode =cc;
    }
    void setCourseName(string cn) {
        courseName = cn;
    }
    void setMaxStudents(int ms) {
        maxStudents = ms;
    }
    void setStudents(Student s) {
        students = &s;
    }
    void setCurrentStudents(int cs) {
        currentStudents = cs;
    }

    string getCourseCode() {
      return courseCode;
    }
    string getCourseName() {
        return courseName;
    }
    int getMaxStudents() {
        return maxStudents;
    }
    int getStudents() {
       return students&;
    }
    int getCurrentStudents() {
       return currentStudents;
    }
    void addStudent(const Student& s) {
        currentStudents += s;
    }
    void displayCourseInfo() {
        cout << "courseCode " << courseCode << endl;
        cout << "courseName " << courseName << endl;
        cout << "maxStudents " << maxStudents << endl;
        cout << "students " << students << endl;
        cout << "currentStudents " << currentStudents << endl;
    }
};














#endif
