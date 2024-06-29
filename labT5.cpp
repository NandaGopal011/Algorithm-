
#include <iostream>
using namespace std;


void bubbleSort(int A[], int n) {


   for (int k = 0; k < n - 1; ++k) {
       for (int i = 0; i < n - 1; ++i) {
           if (A[i] > A[i + 1]) {

               int temp = A[i];
               A[i] = A[i + 1];
               A[i + 1] = temp;
           }
       }
   }
}


int main() {
   int A[] = {5, 2, 8, 1, 3};

   int n = sizeof(A) / sizeof(A[0]);
   cout << "Original array: ";

   for (int i = 0; i < n; ++i) {
       cout << A[i] << " ";
   }
   cout << endl;

   bubbleSort(A, n);
   cout << "Sorted array: ";
   for (int i = 0; i < n; ++i) {
       cout << A[i] << " ";
   }
   cout << endl;


   return 0;
}
