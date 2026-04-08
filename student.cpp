#include "student.h"

// ─────────────────────────────────────────────
//  GPA: average of all subject grades
// ─────────────────────────────────────────────
float Student::gpa() const {
    if (numSubjects == 0) return 0.0f;
    float sum = 0;
    for (int i = 0; i < numSubjects; i++) sum += grades[i];
    return sum / numSubjects;
}

// ─────────────────────────────────────────────
//  Letter grade based on GPA
// ─────────────────────────────────────────────
string Student::letterGrade() const {
    float g = gpa();
    if (g >= 90) return "A+";
    if (g >= 80) return "A";
    if (g >= 70) return "B";
    if (g >= 60) return "C";
    if (g >= 50) return "D";
    return "F";
}
