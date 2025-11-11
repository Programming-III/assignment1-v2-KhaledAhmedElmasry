#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int id ;
public:
    Person() {
        name = "noname";
        id = 0;
    }
    Person(string n,int i) {
        name = n;
        id = i;
    }
    ~Person() {
    }
    void setName(string n) {
         name = n;
    }
    void setId(int i) {
        id = i;
    }
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    void display() {
        cout << "name: " << name << endl;
        cout << "id: " << id;
    }


};
#endif
