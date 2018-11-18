#include<iostream>
#include<Latihan3.h>

using namespace std;

void terbesar(); {


int main() {

    int a;

    do {

        //system("clear");
        cout << "===============================\n";
        cout << "         MENU PILIHAN          \n";
        cout << "===============================\n";
        cout << "1. Cari nilai terbesar data \n";
        cout << "2. Urutkan data\n";
        cout << "0. Keluar\n";
        cout << "===============================\n";
        cout << "\nMasukan pilihan: ";
        cin >> a;

        switch(a) {
            case 1:
                terbesar();
                break;
            case 2:
                urut_data();
                break;
        }

    }while(a != 0);


}

void terbesar(){
    cout << "\nMenu terbsar terpilih\n\n";
    cout << "Masukan nilai N: ";
    int n;
    cin >> n;

    int max=0, a=0;
    for (int i=0; i<n; i++) {
        cout << "Masukan bilangan ke-" << (i+1) << "; ";
        cin >> a;

        if (max < a)
            max = a;
    }
    cout << "Nilai terbesar adalah: " << max;
    cout << "\n\n";
}
