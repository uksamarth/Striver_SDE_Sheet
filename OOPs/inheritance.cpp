#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    // Person(){
    //     cout<< "Parent constructor called" << endl;
    // }
    // ~Person(){
    //     cout << "Parent destructor called" << endl;
    // }
};
class Student: public Person{
    //name, age, rollnum
public:
    int rollnum;
    Student(string name, int age, int rollnum): Person(name,age){
        this->rollnum = rollnum;
    }
    // ~Student(){
    //     cout << "Child destructor called" << endl;
    // }
    void display(){
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollnum:" << rollnum << endl;
    }
};


int main(){
    Student s1("Samarth", 20, 21);
    s1.display();
    return 0;
}