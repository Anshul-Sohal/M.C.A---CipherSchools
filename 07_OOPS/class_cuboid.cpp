#include <iostream>
using namespace std;

class cuboid{
    public:
    //Data Members
    double length;
    double breadth;
    double height;
    //Members Functions
    double calculateArea(){
        return (2*(length*breadth) + 2*(breadth*height) + 2*(length*height));
    }
    double calculateVolume(){
        return length*breadth*height;
    }

};

int main() {
    cuboid c1;
    cuboid c2;
    c1.length = 10;
    c1.breadth = 20;
    c1.height = 30;
    c2.length = 56;
    c2.breadth = 34;
    c2.height = 81;
    cout<<"Area of c1 = "<<c1.calculateArea()<<endl;
    cout<<"Area of c2 = "<<c2.calculateArea()<<endl;
    cout<<"Volume of c1 = "<<c1.calculateVolume()<<endl;
    cout<<"Volume of c2 = "<<c2.calculateVolume();
    return 0;
}