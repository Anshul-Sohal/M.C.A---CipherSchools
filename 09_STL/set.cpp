/*Set -> 
1. Unique elements - no two elements in a set can be equal.
2. Immutable - We can add or remove elements from a set but we can't change the vales of existing elements.
3. Sorted Order - By default order is increasing but we have an option to chnage that.
*/

#include <iostream>
#include<set>
using namespace std;

int main() {
    set<int> set1 = {3,8,1,4,9}; // For asending
    // set<int, greater<int>> set1 = {3,8,1,4,9}; // For decending

    //Inserting value in a set
    set1.insert(20);


    //Deleting value in a set
    set1.erase(1);

    for (int i : set1)
    {
        cout<< i <<" ";
    }
    //Removing the whole set
    cout<<endl;
    cout<<set1.size();
    set1.clear();
    cout<<endl;
    cout<<set1.size();
    for (int i : set1)
    {
        cout<< i <<" ";
    }
    
    return 0;
}