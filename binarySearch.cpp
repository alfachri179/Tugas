#include <iostream>
using namespace std;

// Fungsi untuk melakukan pencarian biner
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Elemen ditemukan
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Pencarian di setengah kanan
        } else {
            high = mid - 1;  // Pencarian di setengah kiri
        }
    }
    return -1;  // Elemen tidak ditemukan
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan!" << endl;
    }

    return 0;
}
