/*STL -> Standard Template Library - provides a set of programming tools to implement alogoritm and data structures like vectors,
list, queue etc*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4};
    //adding element in vector
    arr.push_back(5);
    //access elements in vector
    cout<<arr.at(4)<<endl;
    //Changing the value
    arr.at(0) = 0;
    //Deleting the last element
    arr.pop_back();
    //Iterators -> They are used to point the memory address of memory element. They somehow act like pointers.
    vector<int> :: iterator itr;
    itr = arr.begin();
    cout<<*itr<<endl; // to access begining
    /*ways to Iterate over other elements of vector*/
    // cout<< arr.begin()+1;
    //cout<<*(itr + 1)<<endl;
    //Usage of Iterator to iterate over the whole vector
    for(itr = arr.begin();itr!= arr.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(int item : arr){
        cout<<item<<" ";
    }
    return 0;
}