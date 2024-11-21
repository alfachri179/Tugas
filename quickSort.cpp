#include <iostream>
using namespace std;

// Fungsi untuk melakukan pertukaran dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan partisi dan mengembalikan indeks pivot
int partition(int arr[], int low, int high) {
    // Mengambil elemen terakhir sebagai pivot
    int pivot = arr[high];
    
    // Indeks elemen yang lebih kecil dari pivot
    int i = (low - 1);
    
    // Membandingkan elemen-elemen array dengan pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // Memindahkan pivot ke posisi yang benar di array
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Fungsi Quick Sort utama
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Menemukan indeks pivot setelah partisi
        int pi = partition(arr, low, high);

        // Mengurutkan sub-array kiri dan kanan pivot secara rekursif
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}
