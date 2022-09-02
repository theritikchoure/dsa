// Heap sort - 
// - Heap sort is a comparison based sorting technique based on Binary Heap data structure. 
// - It is similar to selection sort where we first find the minimum element and 
//   place the minimum element at the beginning. 
// - We repeat the same process for the remaining elements.


// Steps in heap sort algorithm
// 1. Take size and value of unsorted array from user
// 2. Heapify the array
// 3. Call ExtractMin() function to fetch the root of min heap
//    Heapify the remaining array again
// 4. Repeat Step 3 till all the values extracted.

// PsuedoCode -
    // void heapSort() {
    //     1. int temp[capacity];
    //     2. for(j=0; j<capacity; j++) {
    //         1. temp[j] = extractMin();
    //         2. print temp[j];
    //     }
    // }

    // int main() {
    //     1. MinHeap obj(s) // size of heap array
    //     2. obj.getUnsortedArray() // get input from user
    //     3. obj.printArray() // print the array
    //     4. for(int i = s/2 - 1; i >= 0; i--) // heapify all nodes from bottom to top (start from one level up from bottom)
    //         4.1. obj.heapify(i) 
    //     5. obj.heapSort(); // perform heap sort and print sorted array
    // }

// -------------------------------------------------------------------------------------------------------
#include<iostream>
#include<math.h>

using namespace std;

class MinHeap {
    public:
        int *harray; // pointer to array of elements in heap
        int capacity; // maximum possible size of heap
        int heap_size; // current number of elements in heap

        MinHeap(int cap) {
            heap_size = cap;
            capacity = cap;
            harray = new int[cap]; // initialize array of capacity
        }

        void printHeap() {
            for(int i=0; i<heap_size; i++) {
                cout << harray[i] << " ";
            }
            cout << endl;
        }

        int height() {
            // to use ceil function, need to include math.h header file
            return ceil(log2(heap_size+1)) - 1; 
        }

        int parent(int i ) {
            return (i-1)/2;
        }

        int left(int i) {
            return 2*i + 1;
        }

        int right(int i) {
            return 2*i + 2;
        }

        int getMin() {
            return harray[0];
        }

        // Used to arrange the heap in the correct order
        void minHeapify(int index) {
            int l = left(index);
            int r = right(index);

            int smallest_index = index;

            if(l < heap_size && harray[l] < harray[index]) {
                smallest_index = l;
            }

            if(r < heap_size && harray[r] < harray[smallest_index]) {
                smallest_index = r;
            }

            if(smallest_index != index) { // determining that the smaLlest value is not at the root index
                swap(harray[index], harray[smallest_index]);
                minHeapify(smallest_index);
            }
        }

        int extractMin() {
            if(heap_size <= 0) return INT_MIN;

            if(heap_size == 1) {
                heap_size--;
                return harray[0];
            }

            int root = harray[0];

            harray[0] = harray[heap_size -1];

            heap_size--;

            minHeapify(0);

            return root; 
        }

        void getUnsortedArray() {
            cout << "Enter " << capacity << " no of elements to sort using HEAP SORT" << endl;
            for (int i = 0; i < capacity; i++) {
                cin >> harray[i];
            }
        }

        void heapSort() {
            int temp[capacity];

            for(int j=0; j < capacity; j++) {
                temp[j] = extractMin();
                cout << temp[j] << " ";
            }
        }

};

int main() {
    int s;
    cout << "Enter the size of min heap" << endl;
    cin >> s;

    MinHeap obj(s);
    obj.getUnsortedArray();

    cout << "Unsorted heap" << endl;
    obj.printHeap();

    for(int i = s/2 - 1; i >= 0; i--) {
        obj.minHeapify(i);
    }

    cout << "Sorted min heap" << endl;
    obj.heapSort();
}