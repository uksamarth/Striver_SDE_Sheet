#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
    double salary;
    int age;

public:
    //properties or attributes
    string name;
    string subject;
    string department;
    
    Teacher(){
        subject = "Maths";
    }
    //methods or functions
    void setSalary(double salary){
        this->salary = salary;
    }
    void changeDept(string newDept){
        department = newDept;
    }
    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher teacher1;
    teacher1.name =  "Sam";
    teacher1.department = "Science";
    teacher1.setSalary(50000);
    cout << teacher1.name << endl;
    cout << teacher1.subject << endl;
    return 0;
}