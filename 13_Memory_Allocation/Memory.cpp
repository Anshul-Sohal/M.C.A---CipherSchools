/*
Static Memory Allocation:-
In this, size and location where variable will be stored is fixed during compile time. But the actual physical memory is only
allocated at runtime.
Eg-
int main(){
    int x;
    char ch;
    int arr[100];
}
-Static memory is slightly faster than dynamic.
-Allocation and deallocation of memory is done by complier itself.

Dynamic Memory Allocation:-
Eg-
int main(){
    int n;
    cin>>n;
    //allocation of memory.
    int*ptr = new arr[n];
    deletion of memory.
    //delete []arr.
}
*/
