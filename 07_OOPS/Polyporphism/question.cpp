#include <iostream>
using namespace std;

class Employee{
    public:
    int salary;
    virtual void Salary() = 0;
    virtual ~Employee(){}
};

class FullTime : public Employee{
    public:
    FullTime(){}
    FullTime(int salary){
        this->salary = salary;
    }
    void Salary() override{
        printf("The salary of fulltime Employee is %d",salary);
    }
    ~FullTime(){}
};

class Contractual : public Employee{
    public:
    Contractual(){}
    Contractual(int salary){
        this->salary = salary;
    }
    void Salary() override{
        printf("The Salary of Contratual employee is %d",salary);
    }
    ~Contractual(){}
};

int main() {
    FullTime FullEmployeeObj;
    Contractual ContractualObj;
    Employee* FullTimeptr = &FullEmployeeObj;
    Employee* ContractualPtr = &ContractualObj;
    int salary,choice;
    cout<<"Enter you choice:\n1>Full Time.\n2>Contractual.\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the Salary of the Full Time Employee=";
        cin>>salary;
        FullEmployeeObj = FullTime(salary);
        FullTimeptr->Salary();
        break;
    case 2:
        cout<<"Enter the Salary of the Contractual Employee=";
        cin>>salary;
        ContractualObj = Contractual(salary);
        ContractualPtr->Salary();
        break;
    default:
        cout<<"Wrong Choice";
        break;
    }
    return 0;
}