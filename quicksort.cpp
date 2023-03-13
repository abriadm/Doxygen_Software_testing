#include <iostream>
#include <vector> // public member function menggunakan vector

using namespace std;
// mebuat fungsi binarysearch
int binarySearch(vector<int> arr, int target) {
    int left = 0; // node sebelah kiri
    int right = arr.size() - 1; // node sebelah kanan array

    while (left <= right) { // menentukan apakah node sebelah kiri kurang dari sama dengan node sebelah kanan
        int mid = left + (right - left) / 2; // mencari titik tengah dalam node
        if (arr[mid] == target) { // menentukan apakah di node  ini sudah sama dengan target yang dicari?, jika tidak lanjut ke else if
            return mid;
        } else if (arr[mid] < target) { // jika node lebih kecil daripada target yang dicari maka akan merunning ulang ke 
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // apabila target tidak ditemukan dalam array
}

int main() {
    // binarysearch dengan ketetuan isi array dalam integer harus berurutan
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // membuat array berisi angka atau integer
    int target = 6; // target yang dicari dalam array
    int result = binarySearch(arr, target); // memanggil fungsi binarysearch dan memasukan kedalam variable integer "result"
    if (result == -1) { // Output dari Binary search tree algorithm
        cout << "Target not found in array." << endl; // Ta
    } else {
        cout<<"Target has to be fonded is : " << target << "." << endl;
        cout << "Target found at index : " << result << "." << endl;
    }
    return 0;
}
