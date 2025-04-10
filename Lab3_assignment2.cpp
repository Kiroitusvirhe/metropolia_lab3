#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;
    string group = "2025 group";  // Private attribute with default value

public:
    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGrade(char g) { grade = g; }

    // Getters
    string getName() { return name; }
    int getAge() { return age; }
    char getGrade() { return grade; }
    string getGroup() { return group; }  // Getter for group

    void displayInfo() {
        cout << "Student Info:" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << getGroup() << endl;
    }
};

int main() {
    Student student1;

    //setters
    student1.setName("SAnteri");
    student1.setAge(69);
    student1.setGrade('2');

    //getters
    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Grade: " << student1.getGrade() << endl;

    // Display full info
    student1.displayInfo();

    return 0;
}