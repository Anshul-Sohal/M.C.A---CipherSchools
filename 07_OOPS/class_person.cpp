#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    //Default Construtor
    Person(){
        cout<<"You have initiallized a Person"<<endl;
    }
    //Parameterized Constructor
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    //Copy Constructor
    Person(Person &obj){
        name = obj.name;
        age = obj.age;
    }
    void print(){
        cout<<"The name of the person is "<<name<<" and the age is "<<age<<endl;
    }
    //Destructor
    ~Person(){
        cout<<"Destructor called"<<endl;
    }
};

int main() {
    Person p1;
    Person p2("Anshul",20);
    Person p3(p2);
    p3.print();
    return 0;
}