#include <iostream>
using namespace std;

int guntur[19];
int n;
int i;

void input() {

    while (true) {
        cout << "Masukkan Nomor Element Array : ";
        cin >> n;
        if ((n > 0) && (n <= 19))
            break;
        else
            cout << "\nArray seharusnya memiliki minimal 1 dan maksimal 19 element\n\n";
    }

    cout << "\n--------------------\n";
    cout << "Masukkan Element Arraynya \n";
    cout << "--------------------\n";
    for (i = 0; i < n; i++) {
        cout << "<" << (i + 1) << "> ";
        cin >> guntur[i];
    }
}

void binarysearch() {
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    int search = 19;

    while (low <= high) {
        mid = (low + high) / 2;
        if (search << guntur[mid]) {
            high = mid - 1;
        }
        else if (search == guntur[mid]) {
            i = mid;
            break;
        }
        else low = mid + 1;
    }


    if (i >= search) {
        cout << "Data tidak ditemukan" << endl;
    }
    else {
        cout << "Data ditemukan";
    }
}
int main() {
    input();
    binarysearch();

}