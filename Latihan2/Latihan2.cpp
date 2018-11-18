#include<iostream>


using namespace std;

void terbesar();
void urut_data();

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
    cout << "\nMenu Terbesar terpilih\n\n";
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

void urut_data() {
    int A,B,C;

    cout << "Masukan bilangan A: "; cin >> A;
    cout << "Masukan bilangan B: "; cin >> B;
    cout << "Masukan bilangan C: "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: "<< B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: "<< C << ", " << B << ", " << A << endl;
        }
    }
}


