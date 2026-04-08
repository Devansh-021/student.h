#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
    int    id;
    string name;
    string department;
    int    age;
    float  grades[5];   // up to 5 subjects
    int    numSubjects;

    float  gpa() const;
    string letterGrade() const;
};

#endif 
