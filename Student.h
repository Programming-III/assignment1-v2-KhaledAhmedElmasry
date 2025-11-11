#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;
#include <iostream>
class Student : public Person{
private:
    int yearLevel;
    string major;
public:
    Student() {
        yearLevel = 0;
        major ="unknown";
    }
    Student(int yl, string m) {
        yearLevel = yl;
        major = m;
    }
    ~Student() {
    }
    void setYearLevel(int yl) {
        yearLevel = yl;
    }

    void setmajor(string m) {
        major = m;
    }
    int getYearLevel() {
        return yearLevel;
    }
    string getMajor() {
        return major;
    }
    void display() {
        cout << "year level: " << yearLevel << endl;
        cout << "major: " << major;
    }

};












#endif
