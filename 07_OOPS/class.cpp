#include <iostream>
using namespace std;

class student{
    private:
    //Data Members
    string name;
    int age;
    int roll_number;
    public:
    //Default Constructor
    student(){
        cout<<"Default Constructor was called";
    }
    //Parameterized Constructor
    student(string name,int age,int roll_number){
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
    }
    ~student(){
        cout<<"\nDestructor called\n";
    }
    //Getter and Setter
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setRoll_number(int roll_number){
        this->roll_number;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getRoll_number(){
        return roll_number;
    }
    //Member Functions
    void printDetails(){
        cout<<"\nThe Details of the student "<<roll_number<<" is\n";
        cout<<"Name: "<<getName()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Roll No. : "<<getRoll_number();
    }
};

int main() {
    student obj1("Anshul",20,1);
    student obj2("Hemant",21,2);
    student obj3("Rajesh",23,3);
    student obj4("Rahul",20,4);
    obj1.printDetails();
    obj2.printDetails();
    obj3.printDetails();
    obj4.printDetails();
    return 0;
}