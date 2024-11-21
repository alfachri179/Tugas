#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk melakukan pencarian loncat
int jumpSearch(int arr[], int size, int target) {
    int step = sqrt(size);  // Langkah loncat
    int prev = 0;
    
    // Menemukan blok yang tepat
    while (arr[min(step, size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;  // Jika melewati batas array
        }
    }
    
    // Lakukan pencarian linear dalam blok
    for (int i = prev; i < min(step, size); i++) {
        if (arr[i] == target) {
            return i;  // Elemen ditemukan
        }
    }
    
    return -1;  // Elemen tidak ditemukan
}

int main() {
    int arr[] = {1, 5, 8, 12, 15, 18, 19, 20, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 18;
    
    int result = jumpSearch(arr, size, target);
    if (result != -1) {
        cout << "Elemen ditemukan di indeks: " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan!" << endl;
    }

    return 0;
}
