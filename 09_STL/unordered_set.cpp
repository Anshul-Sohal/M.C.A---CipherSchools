#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int>un_set1 = {4,6,1,3,9};
    for(int i : un_set1){
        cout<<i<<" ";
    }
    return 0;
}