https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// ECE 209 - Fall 2020 - Mini-Program 4
// Reads a file of appointments for a veterinary clinic
// Prints either unsorted, or sorted by pet name
// Usage: <filename> <option>
//    <filename> is text file containing appointment information
//    <option> is what to print
//       0 : only print the number of appointments (Task 1)
//       1 : print the first appointment (Task 2)
//       2 : print all appointments (Task 3)
//       3 : print all appointments in order of pet name (Task 4)


#include <stdio.h>
#include <stdlib.h>

#include "Appointment.h"

int main() {

    Appointment *appts = NULL;   // array of appointments
    int num = 0;           // number of appointments
    int printOption = 0;   // what should be printed?
    char filename[50];     // name of file

    printf("Enter file name (<50 chars): ");
    fflush(stdout);
    scanf("%49s", filename);

    while ((printOption < 1) || (printOption >4)) {
        printf("Enter task number (1-4): ");
        fflush(stdout);
        scanf("%d", &printOption);
    }

    appts = readFile(filename, &num);

    switch (printOption) {
        case 1:
            if (!appts) {
                printf("readFile returned NULL\n");
            } else {
                printf("readFile returned %d appointments\n", num);
            }
            break;
        case 2:
            printf("First appointment:\n");
            printAppointment(&appts[0]);
            break;
        case 3:
            printf("Unsorted appointments:\n");
            printAll(appts, num);
            break;
        case 4:
            printf("Appoinments by pet name:\n");
            printAllByPet(appts, num);
    }
    return EXIT_SUCCESS;
}

