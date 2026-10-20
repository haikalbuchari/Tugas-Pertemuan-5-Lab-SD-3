#include <iostream>
using namespace std;

//membuat fungsi binary search (iterative)
int binarySearch(int data[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (data[mid] == target) {
            return mid;
        } else if (data[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    // data nilai mahasiswa (sudah terurut ascending)
    int data[] = {55, 60, 65, 70, 75, 78, 80, 85, 90, 95};
    int n = sizeof(data) / sizeof(data[0]);
    int target;

   
    cout << "Masukkan nilai yang ingin dicari : ";
    cin >> target;

    int hasil = binarySearch(data, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks : " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}