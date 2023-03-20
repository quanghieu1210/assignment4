#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    Employee(string n, int id, string dept, string pos) {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }
    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }
    void setName(string n) { name = n; }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setPosition(string pos) { position = pos; }
    string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

int main() {
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Name\t\tID Number\tDepartment\tPosition" << endl;
    cout << emp1.getName() << "\t" << emp1.getIdNumber() << "\t\t" << emp1.getDepartment() << "\t\t" << emp1.getPosition() << endl;
    cout << emp2.getName() << "\t" << emp2.getIdNumber() << "\t\t" << emp2.getDepartment() << "\t\t\t" << emp2.getPosition() << endl;
    cout << emp3.getName() << "\t" << emp3.getIdNumber() << "\t\t" << emp3.getDepartment() << "\t" << emp3.getPosition() << endl;

    return 0;
}
