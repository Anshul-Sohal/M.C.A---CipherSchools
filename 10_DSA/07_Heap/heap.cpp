#include <iostream>
using namespace std;

template<class T>
class heap {
public:
    T arr[100];
    int size;
    
    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size += 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deletionFromHeap() {
        if (size == 0) return;
        // Replace first node with last
        arr[1] = arr[size];
        // Remove last element
        size--;
        // Take root to correct position
        int i = 1;
        while (i <= size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            int largest = i;

            if (leftIndex <= size && arr[leftIndex] > arr[largest]) {
                largest = leftIndex;
            }
            if (rightIndex <= size && arr[rightIndex] > arr[largest]) {
                largest = rightIndex;
            }
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i){
        int largest = i;
        int leftChild = 2*i;
        int rightChild = 2*i + 1;
        
        if(arr[leftChild] > arr[largest]){
            largest = leftChild;
        }
        if(arr[rightChild] > arr[largest]){
            largest  = rightChild;
        }
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap<int> h;
    h.insert(10);
    h.insert(2);
    h.insert(8);
    h.insert(25);
    h.insert(6);
    h.insert(34);
    h.insert(4);
    h.print();
    h.deletionFromHeap();
    h.print();
    return 0;
}
