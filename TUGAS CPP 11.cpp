#include <iostream>
using namespace std;

void bubbleSort (int array [], int size){
    for (int step = 0; step < (size-1); ++step){
    int swapped = 0;
    for (int i = 0; i < (size-step-1); ++i){
    if (array[i] > array [i+1]){
    int temp = array [i];
    array[i] = array [i+1];
    array[i+1] = temp;
    swapped = 1;
    }
    }

    if (swapped == 0)
        break;
    }
}
void printArray (int array[], int size) {
 for (int i=0; i<size; ++i) {
    cout << " "<<array[i];
 }
 cout<<"\n";
}

int binarySearch(int array[], int x, int awal, int akhir) {
 while (awal <= akhir) {
    int tengah = awal + (akhir - awal) / 2;
 if (array[tengah] == x)
    return tengah;
 if (array[tengah] < x)
   awal = tengah + 1;
 else
     akhir = tengah - 1;
 }
 return -1;
}

int main() {
int n,x;
cout << "Masukkan Jumlah data : ";
cin >> n;
int data[n];
for (int i=0; i<n; ++i)
    cin >> data[i];

    cout<<"Array sebelum di urutkan :\n";
    printArray(data, n);

    bubbleSort(data, n);
 cout << "Array sudah diurutkan secara ascending :\n";
 printArray(data, n);
 cout<<"Masukkan data yang dicari: ";
 cin>>x;
 int result=binarySearch(data,x,0,n-1);
 if(result==-1)
    cout<<"Tidak Ditemukan";
 else
  cout << "Elemen ditemukan pada indeks: " << result;
}
