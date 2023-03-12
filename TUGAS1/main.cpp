#include <iostream>
using namespace std;



int penjumlahan (int a, int b){
    int c = a + b;
    return c;
}
int pengurangan (int a, int b){
    int d = a - b;
    return d;
}
int perkalian (int a, int b){
    int e = a * b;
    return e;
}
void hitungRata(float arr[], int n) {
  float total = 0;
  for (int i = 0; i < n; i++) {
    total += arr[i];
  }
   float rata = total / n;
   cout << "Rata-rata : " << rata << endl;
   cout << "Total elemen array: " << total << endl;
}
int main() {

    int a=5;
    int b=5;
    int c = penjumlahan(a,b);
    int d = pengurangan(a,b);
    int e = perkalian(a,b);
    cout<<"hasil 5 + 5 = "<<c<<endl;
    cout<<"hasil 5 - 5 = "<<d<<endl;
    cout<<"hasil 5 x 5 = "<<e<<endl;
    const int n = 4;
    float arr[n];
    cout << "Masukkan " << n << " elemen array: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    hitungRata(arr, n);

    return 0;
}
