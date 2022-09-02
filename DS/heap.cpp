#include<iostream>
#include<math.h>

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

class MinHeap {
    public:
        int *harray; // pointer to array of elements in heap
        int capacity; // maximum possible size of heap
        int heap_size; // current number of elements in heap

        MinHeap(int cap) {
            heap_size = 0;
            capacity = cap;
            harray = new int[cap]; // initialize array of capacity
        }

        void linearSearchIterative(int val) {
            for (int i = 0; i < heap_size; i++)
            {
                if(harray[i] == val) {
                    cout << "Value Found" << endl;
                    return;
                } else {
                    cout << "Value Not Found" << endl;
                    return;
                }
            }
        }

        void linearSearchRecursive(int index, int val) {
            if(index >= heap_size) {
                cout << "Value Not Found" << endl;
                return;
            };

            if(harray[index] == val) {
                cout << "Value Found" << endl;
                return;
            } else {
                linearSearchRecursive(index+1, val);
                return;
            }
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

        void insert(int k) {
            if(heap_size == capacity) {
                cout << "Overflow" << endl;
                return;
            }

            heap_size++;
            int i = heap_size-1;

            harray[i] = k;

            while (i!=0 && harray[parent(i)] > harray[i]) {
               swap(harray[i], harray[parent(i)]);
               i = parent(i);
            }
            
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

        void decreaseKey(int index, int new_val) {
            harray[index] = new_val;
            while(index != 0 && harray[parent(index)] > harray[index]) {
                swap(harray[index], harray[parent(index)]);
                index = parent(index);
            }
        }

        void deleteKey(int index) {
            decreaseKey(index, INT_MIN);
            extractMin();
        }

};

int main() {
    int s;
    cout << "Enter the size of min heap" << endl;
    cin >> s;

    MinHeap obj(s);

    cout << "Min heap created" << endl;

    int option, val;

    do
    {
        cout << "What operation do you want to perform?" << endl;
        cout << "Select option number or enter 0 to exit." << endl;
        cout << endl;
        cout << "1. Insert Key/Value" << endl;
        cout << "2. Search Key/Value" << endl;
        cout << "3. Delete Key/Value" << endl;
        cout << "4. Get Min" << endl;
        cout << "5. Extract Min" << endl;
        cout << "6. Height of Heap" << endl;
        cout << "7. Print Heap" << endl;
        cout << "9. Clear screen" << endl;
        cout << "0. Exit" << endl;

        cin >> option;

        switch (option)
        {
            case 0:
                break;

            case 1:
                cout << "Enter value to insert in heap" << endl;
                cin >> val;
                cout << endl;
                obj.insert(val);
                break;

            case 2:
                cout << "Enter value to search in heap" << endl;
                cin >> val;
                // obj.linearSearchIterative(val);
                cout<< endl;
                break;

            case 3:
                cout << "Enter value to delete in heap" << endl;
                cin >> val;
                // obj.delete(val);
                cout<< endl;
                break;
            
            case 4:
                // cout << "Min Value" << obj.getMinValue() << endl;
                break;

            case 5:
                cout << "Max Value" << obj.extractMin() << endl;
                break;

            case 6:
                cout << "Heap tree height" << obj.height() << endl;
                break;

            case 7:
                cout << "Heap tree Values - " << endl;
                obj.printHeap();
                cout << endl;
                break;

            case 8:
                system("cls");
                break;

            default:
                cout << "Invalid Options" << endl;
        }
    } while(option != 0);
}