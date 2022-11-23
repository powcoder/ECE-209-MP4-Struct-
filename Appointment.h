https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// ECE 209 - Fall 20 - Mini-Program 4
// definition of appointment data structure
// declaration of functions to be implemented

#ifndef MP4_APPOINTMENT_H
#define MP4_APPOINTMENT_H

struct time {  // using 24-hour clock
    int hrs;     // 0 - 23
    int mins;    // 0 - 59
};

struct appt {
    char petName[25];    // one word only, no spaces
    char petType[25];    // e.g., dog, cat, goldfish... -- one word only
    char ownerName[25];  // last name only, no spaces
    struct time arrival;
};
typedef struct appt Appointment;

// function declarations
Appointment * readFile(const char * fname, int *number);
void printAppointment(const Appointment *a);
void printAll(const Appointment *a, int n);
void printAllByPet(const Appointment *a, int n);

#endif //MP4_APPOINTMENT_H
