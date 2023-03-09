#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(){
            cout << "A person class is created!\n";
        }
        // // initialization list
        // Person(): name("John"), age(18){}
        // // assign with constructor input
        // Person(string Name = "John", int Age = 18){
        //     name = Name;
        //     age = Age;
        // }
        // // Combine both
        // Person(string Name = "John", int Age = 18): name(Name), age(Age){}
        ~Person(){
            cout << "A person class is cleared.\n";
        }
        void set_age(int a){age = a;}
        void set_name(string n){name = n;}
        void print_info(){
            cout << "Name: " << name << " age: " << age << endl;
        }
};

int main()
{
    Person p1;
    string input;
    cout << "Please input your name: ";
    cin >> input;
    p1.set_name(input);

    cout << "Please input your age: ";
    cin >> input;
    p1.set_age(stoi(input));
    
    p1.print_info();
    return 0;
}