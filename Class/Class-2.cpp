#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string Name = "John", int Age = 18): name(Name), age(Age){}
        ~Person(){}
        void set_age(int a){age = a;}
        int get_age(){return age;}
        void set_name(string n){name = n;}
        string get_name(){return name;}
        void print_info(){
            cout << "Name: " << name << " age: " << age << endl;
        }
};

class Student: public Person{
    private:
        string department;
    public:
        Student(string D = "unknown", string Name = "John", int Age = 18):
        department(D), Person(Name, Age){}
        Student(string D , const Person& P): department(D), Person(P){}
        void set_department(string D){department = D;}
        void set_info(string, string, int);
        void print_student_info(){
            print_info();
            cout << "Major: " << department << ".\n";
        }
};
void Student::set_info(string D, string Name, int Age){
    department = D;
    this->set_age(Age);
    this->set_name(Name);
}
int main()
{
    Student s1("Mechanical Engineering", "relu", 22);
    s1.print_student_info();

    Person p;
    Student s2("Electrical Engineering", p);
    // s2.set_info("Computer Science", "Jack", 21);
    s2.print_student_info();
    return 0;
}