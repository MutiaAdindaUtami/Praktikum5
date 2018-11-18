# Praktikum5


## latihan1.cpp : Membuat fungsi sederhana

**Alur algoritma**
1. Mendeklarasikan variabel 'int sum(int a,int b);' sebagai variable input.
2. Membaca input dari keyboard `cin >> a >> b;`
3. Membandingkan nilai variable int a, b;
				cin >> a >> b;
    				cout << sum(a, b);

    				int c = sum(a, 10);
    				cout << c;

    				cout << bagi(a,b);



**code program lengkap**
```c++
#include<iostream>

using namespace std;

// deklarasi fungsi
int sum(int,int b=10);

int bagi(int a,int b) {
    return a/b;
}

// fungsi utama
int main(){

    //memanggil fungsi
    cout << sum(1,99) << endl;

    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    int c = sum(a, 10);
    cout << c << endl;

    cout << bagi(a,b) << endl;

    cout << sum (5);

    return 0;
}

/* Fungsi didefinisikan setelah fungsi utama.
 */
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}
```

## latihan2.cpp :  Mengembangkan aplikasi dengan membuat fungsi dari hasil praktikum sebelumnya menjadi satu aplikasi dengan menampilkan menu pilihan.

**Alur algoritma**
1. Mendeklarasikan variabel 'void terbesar,urut_data;' sebagai variable input.
2. Membaca input dari keyboard `cin >> a`
3. Membandingkan nilai variable  cout << "Nilai terbesar adalah: " << max;
   				 cout << "\n\n";


**code program lengkap**
```c++
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

# Praktikum5
