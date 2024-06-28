#include <iostream>
using namespace std;

int power(int a,int times){
    if(times == 0){
        return 1;
    }else{
        times--;
        return a*(power(a,times));
    }
}

int main() {
    int a,times;
    cin>>a>>times;
    cout<<power(a,times);
    return 0;
}