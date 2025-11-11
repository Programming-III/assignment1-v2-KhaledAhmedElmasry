#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
using namespace std;
#include <iostream>
class Instructor:public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor() {
        department ="unknown";
        experienceYears = 0;
    }
    Instructor(string d,int ey) {
        department = d;
        experienceYears =ey;
    }
    ~Instructor() {
    }
    void setDepartment(string d) {
        department = d;
    }
    void setExperienceYears(int ey) {
        experienceYears = ey;
    }
    string getDepartment() {
        return department;
    }
    int getExperienceYears() {
        return experienceYears;
    }
    void display() {
        cout << "department: " << department << endl;
        cout << "experience years: " << experienceYears;
    }
};
#endif
