#include <iostream>
using namespace std;
int main(){
  string menu1 = "Nasi Goreng Informatika", menu2 = "Nasi Soto Ayam Internet",
         menu3 = "Gado-gado Disket", menu4 = "Bubur Ayam LAN";
  int    harga1 = 5000, harga2 = 7000, harga3 = 4500, harga4 = 4000;

  int    pilihan;

  cout << "\tMenu Restaurant Mc'Yahud\n"
       << "1. " << menu1 << "\t" << harga1 << '\n'
       << "2. " << menu2 << "\t" << harga2 << '\n'
       << "3. " << menu3 << "\t\t" << harga3 << '\n'
       << "4. " << menu4 << "\t\t" << harga4 << '\n';

  cout << "\nMasukan Pilihan Anda: ";
  if(cin >> pilihan)
  {
    cout << '\n';
    if(pilihan == 1) cout << "Pilihan No." << pilihan << " " << menu1 << " Rp. " << harga1 << ",-\n";
    else if (pilihan == 2) cout << "Pilihan No." << pilihan << " " << menu2 << " Rp. " << harga2 << ",-\n";
    else if (pilihan == 3) cout << "Pilihan No." << pilihan << " " << menu3 << " Rp. " << harga3 << ",-\n";
    else if (pilihan == 4) cout << "Pilihan No." << pilihan << " " << menu4 << " Rp. " << harga4 << ",-\n";
    else cout << "Pilihan No." << pilihan << " tidak tersedia!\n";
  }else cout << "Hanya menerima angka!\n";
}
