#include <iostream>
using namespace std;

class Distance{
    private:
    int meter;
    friend int increaseDistance(Distance);
    public:
    Distance(){
        meter = 0;
        cout<<"Initial Distance = "<<meter<<endl;;
    }
};

int increaseDistance(Distance d){
    d.meter += 10;
    return d.meter;
}

int main() {
    Distance DistObj;
    cout<<"Incresed Distance = "<<increaseDistance(DistObj);
    return 0;
}