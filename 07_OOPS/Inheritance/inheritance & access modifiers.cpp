#include <iostream>
using namespace std;

class Parent{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};

class FirstChild : public Parent{
    //X is public
    //Y is Protected
    //Z is not accessible
};
class ThirdChild : protected Parent{
    //X is Protected
    //Y is Protected
    //Z is not accessible
};
class SecondChild : private Parent{
    //X is Private
    //Y is Private
    //Z is not accessible
};

int main() {
    
    return 0;
}