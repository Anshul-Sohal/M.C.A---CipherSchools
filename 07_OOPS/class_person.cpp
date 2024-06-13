#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        cout<<"You have initiallized a Person"<<endl;
    }
    Person(string name,int age){
        this->name = name;
        this->age = age;
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
    p2.print();
    return 0;
}