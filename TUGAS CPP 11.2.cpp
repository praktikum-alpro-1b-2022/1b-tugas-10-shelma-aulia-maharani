#include <iostream>
using namespace std;
int search(int array[], int n, int x) {
 for (int i = 0; i < n; i++)
 if (array[i] == x)
 return i;
 return -1;
}
int main() {
    int n,x;
cout << "Masukkan Jumlah data : ";
cin >> n;
int data[n];
for (int i=0; i<n; ++i)
    cin >> data[i];
 cout<<"Masukkan data yang dicari: ";
 cin>>x;
 int result = search(data, n, x);
 if(result==-1)
    cout<<"Tidak Ditemukan";
 else
  cout << "Elemen ditemukan pada indeks: " << result;
}
