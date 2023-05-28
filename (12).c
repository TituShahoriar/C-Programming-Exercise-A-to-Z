#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[50];
    int age;
    char gender;
    char contactNumber[20];
    char address[100];
    float cgpa;
} Student;

void displayHighCGPAStudents(Student students[], int n) {
    printf("Students with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
        }
    }
}

void insertStudent(Student students[], int *n) {
    if (*n >= MAX_STUDENTS) {
        printf("Cannot insert student, array is full\n");
        return;
    }

    Student newStudent;
    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter student name: ");
    scanf("%s", newStudent.name);
    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student gender (M/F): ");
    scanf(" %c", &newStudent.gender);
    printf("Enter student contact number: ");
    scanf("%s", newStudent.contactNumber);
    printf("Enter student address: ");
    scanf("%s", newStudent.address);
    printf("Enter student CGPA: ");
    scanf("%f", &newStudent.cgpa);

    students[(*n)++] = newStudent;
}

void deleteStudent(Student students[], int *n) {
    char name[50];
    printf("Enter the name of the student to delete: ");
    scanf("%s", name);

    int found = 0;
        for (int i = 0; i < *n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                students[j] = students[j + 1];
            }
            (*n)--;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }
}

void modifyContactOrAddress(Student students[], int n) {
    int id;
    printf("Enter the ID of the student to modify: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("1. Modify contact number\n");
            printf("2. Modify address\n");
            int choice;
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter new contact number: ");
                scanf("%s", students[i].contactNumber);
            } else if (choice == 2) {
                printf("Enter new address: ");
                scanf("%s", students[i].address);
            } else {
                printf("Invalid choice\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int n = 0;

    int choice;
    do {
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert student\n");
        printf("3. Delete student\n");
        printf("4. Modify contact number or address\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayHighCGPAStudents(students, n);
                break;
            case 2:
                insertStudent(students, &n);
                break;
            case 3:
                deleteStudent(students, &n);
                break;
            case 4:
                modifyContactOrAddress(students, n);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 5);

    return 0;
}