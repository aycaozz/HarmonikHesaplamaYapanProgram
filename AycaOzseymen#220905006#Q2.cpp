
#include <iostream>
    using namespace std;

    int* diziBelirle(int& n){
        cout << "Dizi eleman sayisini giriniz: ";
        cin >> n;

        int* dizi1 = new int[n];
        for (int i = 0; i < n; i++) {
            cout << i + 1 << "  Elemani giriniz:  ";
            cin >> dizi1[i];
        }
        return dizi1;
    }

    double harmonikOrtalamaHesaplayanProgram(int* dizi2, int*n) {
        double toplam = 0;
        for (int i = 0; i < *n; i++) {
            toplam += 1.0 / dizi2[i];
        }
        return static_cast<double>(*n) / toplam;
    }
    void printortalamaUstuHesapla(int* dizi2, int n, double const* ortalama) {
        cout << "Harmonik Ortalama: " << *ortalama << endl;
        cout << "Harmonik Ortalamadan buyuk elemanlar :" << endl;
        for (int i = 0; i < n; i++) {
            if (dizi2[i] > *ortalama) {
                cout << dizi2[i] << " ";
            }
        }
        cout << endl;
    }
    int main() {
        int n;
        int* dizi1 = diziBelirle(n);
        if (n == 0) {
            cout << "Dizi elamani 0'dir." << endl;
            return 1;
        }

        double harmonikOrtalama = harmonikOrtalamaHesaplayanProgram(dizi1, &n);
        printortalamaUstuHesapla(dizi1, n, &harmonikOrtalama);

        delete[] dizi1;
        system("PAUSE");

        return 0;

    }