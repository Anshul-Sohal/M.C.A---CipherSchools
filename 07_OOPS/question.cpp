#include <iostream>
using namespace std;

class Students{
    private:
    string name;
    int roll_no;
    int age;
    char grade;
    public:
    Students(){}
    Students(string name,int age,int roll_no,char grade){
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->grade = grade;
    }
    //Getter and Setters
    void setName(string name){
        this->name = name;
    }
    void setRoll_no(int roll_no){
        this->roll_no = roll_no;
    }
    void setAge(int age){
        this->age = age;
    }
    void setGrade(char grade){
        this->grade = grade;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getRoll_no(){
        return roll_no;
    }
    char getGrade(){
        return grade;
    }
    void print(){
        cout<<"The name of the students is "<<name<<"\nThe age of the student is "<<age<<"\nThe Roll no. of the student is "<<roll_no<<endl;
        cout<<"The grade of the student is "<<grade;
    }
};

int main() {
    Students s1("Anshul",20,07,'A');
    cout<<"Details before updating:\n";
    s1.print();
    s1.setGrade('O');
    s1.setRoll_no(1);
    cout<<"\nDetails after updating:\n";
    s1.print();
    return 0;
}