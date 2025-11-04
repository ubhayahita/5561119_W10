#include <iostream>
using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

const int size = 20;
studentType students[size]; 

void getData(studentType students[]) {
    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << i+1 << endl;
        
        cout << "First name: ";
        cin >> students[i].studentFName;

        cout << "Last name: ";
        cin >> students[i].studentLName;

        cout << "Test score: ";
        cin >> students[i].testScore;
    }
}

void assignGrade(studentType students[]) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore >= 90)
            students[i].grade = 'A';
        
        else if (students[i].testScore >= 80)
            students[i].grade = 'B';

        else if (students[i].testScore >= 70)
            students[i].grade = 'C';
        
        else if (students[i].testScore >= 60)
            students[i].grade = 'D';

        else
            students[i].grade = 'E';

    }
}

int findHighest(studentType students[]) {
    int highest = students[0].testScore;

    for (int i = 0; i < size; i++) {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }

    return highest;
}
void printAll(studentType students[]){
    cout << "\n-----List of all students-----" << endl;
    for (int i = 0; i < size; i++){
        cout << i+1 << ". " << students[i].studentLName << ", " << students[i].studentFName << endl; 
    }
}
void printHighest(studentType students[], int highest) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highest) {
            cout << "\nStudent who got the highest score is: " << students[i].studentLName << ", " << students[i].studentFName << endl;
        }
    }
}

void getData(studentType students[]);
void assignGrade(studentType students[]);
int findHighest(studentType students[]);
void printAll(studentType students[]);
void printHighest(studentType students[]);

int main() {
    getData(students);
    assignGrade(students);
    int highest = findHighest(students);
    printAll(students);
    printHighest(students, highest);

return 0;

}
