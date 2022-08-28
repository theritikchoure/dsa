#include<iostream>
#include<algorithm>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int getMax(int array[], int size) {
   int max = array[0];
   for(int i = 1; i<size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; //the max element from the array
}

void countSort(int input_arr[], int size) {
   int output_arr[size];
   int max = getMax(input_arr, size) + 1;

   int count_arr[max];

   // 1. Initialize count array with 0
   for (int i = 0; i < max; i++)
   {
      count_arr[i] = 0;
   }
   
   // 2. Add Occurrences of the elements of the input array
   for (int i = 0; i < size; i++)
   {
      ++count_arr[input_arr[i]];
   }

   // 3. Commulative Array
   for (int i = 1; i < max; i++)
   {
      count_arr[i] = count_arr[i] + count_arr[i-1];
   }

   // 4. Placing input array element in output array at proper position
   for (int i = 0; i < size; i++)
   {
      output_arr[--count_arr[input_arr[i]]] = input_arr[i];
   }
   
   // copy output array element into input array
   for (int i = 0; i < size; i++)
   {
      input_arr[i] = output_arr[i];
   }

}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n+1]; //create an array with given number of elements
   cout << "Enter elements:" << endl;

   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   cout << "Array before Sorting: ";
   display(arr, n);
   countSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}