#include <iostream>

using namespace std;


bool isEven  (int x);
bool isOdd   (int x);
bool isFactor(int x, int y);
int  maxN    (int a,int b);
int  minN    (int a, int b);
int  maxArray(int a[]);
int  minArray(int a[]);
bool isFound (int x, int a[]);
void swapN   (int a,int b);
void arr    (int myArray[]);
int  jumlah;
int main()
{

    int c,b,n;


    cout << "Masukkan nilai c : ";
    cin >> c;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "bilangan c = "<< c <<" genap  : " << isEven(c) << endl;
    cout << "bilangan b = "<< b <<" genap  : " << isEven(b) << endl;
    cout << "bilangan c = "<< c <<" ganjil : " << isOdd(c) << endl;
    cout << "bilangan b = "<< b <<" ganjil : " << isOdd(b) << endl;
    cout << "bilangan b = "<< b <<" adalah faktor dari bilangan X = "<< c << ":"<< isFactor(c,b) << endl;
    cout << "bilangan c = "<< c <<" adalah faktor dari bilangan Y = "<< b << ":"<< isFactor(b,c) << endl;
    cout << "bilangan terbesar? c = "<< c <<" dan b = "<< b << "?\t:"<< maxN(c,b) <<endl;
    cout << "bilangan terkecil? c = "<< c <<" dan b = "<< b << "?\t:"<< minN(c,b) <<endl;

     cout << "masukkan Jumlah Element array = ";
    cin >> n;
    int a[n];
    for (int i=0; i<n ; i++){
        cout << "Masukkan bilangan index ke:["<<i<<"] : ";
        cin >> a[i];
    }
    jumlah = sizeof(a)/sizeof(int);

    cout << "Berapa bilangan terbesar dalam ";arr(a);
    cout << " ?\t: " << maxArray(a) << endl;
    cout << "Berapa bilangan terkecil dalam ";arr(a);
    cout << " ?\t: " << minArray(a) << endl;
    cout << "Apakah bilangan c = "<< c << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(c,a) << endl;
    cout << "Apakah bilangan b ="<< b << " ada dalam ";arr(a);
    cout << " ?\t: " << isFound(b,a) << endl;
    swapN(c,b);


    return 0;
}

bool isEven (int x) {
    return x % 2 == 0;
}

bool isOdd (int x){
    return x % 2 == 1;
}

bool isFactor(int x, int y){
    return x % y == 0;
}

int maxN(int a,int b){
    int m=0;
    if(a>b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int minN(int a, int b){
    int m;
    if(a<b) {
        m=a;
    } else {
        m=b;
    }
    return m;
}

int maxArray(int a[]){
    int m=0;
    for (int i=0; i<jumlah ; i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}


int minArray(int a[]){
    int m=a[0];
    for (int i=0; i<jumlah ; i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}

bool isFound(int x, int a[]){
    bool m = false;
    for (int i=0; i<jumlah ; i++) {
        if (x == a[i]){
            m = true;
        }
    }
    return m;
}

void swapN(int a,int b){
    cout << "Tukar nilai bilangan c = "<< a <<" dan b = "<< b << " : ";
    int temp = a;
    a = b;
    b = temp;
    cout << "c = " << a << " dan b = "<< b;
}

void arr(int myArray[]){
    cout <<"Array[" << jumlah << "] = {";
    for (int i=0; i < jumlah; i++){
        cout << myArray[i];
        if (i < jumlah-1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "}";
}
