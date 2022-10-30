#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
        string produk1 = "Dancow"; // Maks 13 character
        string harga1B = "10.000", harga1S = "4.250", harga1K = "2.100";        // Maks 7 character (diharuskan memakai titik)

        string produk2 = "Indomilk";
        string harga2B = "8.500", harga2S = "4.000", harga2K = "2.025";

        string produk3 = "Sustacal";
        string harga3B = "17.000", harga3S = "14.500", harga3K = "8.300";


        string h1B = "Rp. " + harga1B + ",- ", h1S = "Rp. " + harga1S + ",- ", h1K = "Rp. " + harga1K + ",-";
        string h2B = "Rp. " + harga2B + ",- ", h2S = "Rp. " + harga2S + ",- ", h2K = "Rp. " + harga2K + ",-";
        string h3B = "Rp. " + harga3B + ",- ", h3S = "Rp. " + harga3S + ",- ", h3K = "Rp. " + harga3K + ",-";

cout << "+-----------+-------------+------------+--------------+\n" <<
        "| Kode Susu | Nama Produk | Ukuran     | Harga        |\n" <<
        "+-----------+-------------+------------+--------------+\n" <<
        "|     1     |" << setw(13) << left <<  produk1 << "| B = Besar  | " << setw(13) << h1B << "|\n" <<
        "|           |             | S = Sedang | " << setw(13) << h1S << "|\n" <<
        "|           |             | K = Kecil  | " << setw(13) << h1K << "|\n" <<
        "+-----------+-------------+------------+--------------+\n" <<
        "|     2     |" << setw(13) << left <<  produk2 << "| B = Besar  | " << setw(13) << h2B << "|\n" <<
        "|           |             | S = Sedang | " << setw(13) << h2S << "|\n" <<
        "|           |             | K = Kecil  | " << setw(13) << h2K << "|\n" <<
        "+-----------+-------------+------------+--------------+\n" <<
        "|     3     |" << setw(13) << left <<  produk3 << "| B = Besar  | " << setw(13) << h3B << "|\n" <<
        "|           |             | S = Sedang | " << setw(13) << h3S << "|\n" <<
        "|           |             | K = Kecil  | " << setw(13) << h3K << "|\n" <<
        "+-----------+-------------+------------+--------------+\n";

        int kode, multiplier, tmp;
        long total, pembelian;
        char ukuran;


        cout << "Masukan Kode Susu: ";
        cin >> kode;
        if(!cin){
                cout << "Error: Anda memasukan nilai non-numeric\n";
                return 0;
        }


        string choosedProduct;
        string choosedProductPrice;

        switch (kode) {
                case 1:
                       cout <<  "+-------------+------------+--------------+\n" <<
                                "|" << setw(13) << left <<  produk1 << "| B = Besar  | " << setw(13) << h1B << "|\n" <<
                                "|             | S = Sedang | " << setw(13) << h1S << "|\n" <<
                                "|             | K = Kecil  | " << setw(13) << h1K << "|\n" <<
                                "+-------------+------------+--------------+\n";
                        cout << "Masukan Ukuran (B/S/K) ";
                        cin >> ukuran;
                        tmp = ((int)ukuran < 97) ? (int)ukuran + 32 : (int) ukuran;
                        choosedProduct = produk1;
                        switch (tmp) {
                                case 98:        // char decimal
                                        multiplier = stof(harga1B) * 1000;
                                        choosedProductPrice = h1B;
                                        break;
                                case 115:
                                        multiplier = stof(harga1S) * 1000;
                                        choosedProductPrice = h1S;
                                        break;
                                case 107:
                                        multiplier = stof(harga1K) * 1000;
                                        choosedProductPrice = h1K;
                                        break;
                                default:
                                        cout << "Ukuran Invalid\n";
                                        return 0;
                        }
                        break;
                case 2:
                        cout <<  "+-------------+------------+--------------+\n" <<
                                  "|" << setw(13) << left <<  produk2 << "| B = Besar  | " << setw(13) << h2B << "|\n" <<
                                  "|             | S = Sedang | " << setw(13) << h2S << "|\n" <<
                                  "|             | K = Kecil  | " << setw(13) << h2K << "|\n" <<
                                  "+-------------+------------+--------------+\n";
                          cout << "Masukan Ukuran (B/S/K) ";
                          cin >> ukuran;
                          tmp = ((int)ukuran < 97) ? (int)ukuran + 32 : (int) ukuran; // konversi char
                          choosedProduct = produk2;
                          switch (tmp) {
                                  case 98:
                                          multiplier = stof(harga2B) * 1000;
                                          choosedProductPrice = h2K;
                                          break;
                                  case 115:
                                          multiplier = stof(harga2S) * 1000;
                                          choosedProductPrice = h2K;
                                          break;
                                  case 107:
                                          multiplier = stof(harga2K) * 1000;
                                          choosedProductPrice = h2K;
                                          break;
                                  default:
                                          cout << "Ukuran Invalid\n";
                                          return 0;
                          }
                          break;
                case 3:
                          cout <<  "+-------------+------------+--------------+\n" <<
                                  "|" << setw(13) << left <<  produk3 << "| B = Besar  | " << setw(13) << h3B << "|\n" <<
                                  "|             | S = Sedang | " << setw(13) << h3S << "|\n" <<
                                  "|             | K = Kecil  | " << setw(13) << h3K << "|\n" <<
                                  "+-------------+------------+--------------+\n";
                          cout << "Masukan Ukuran (B/S/K) ";
                          cin >> ukuran;
                          tmp = ((int)ukuran < 97) ? (int)ukuran + 32 : (int) ukuran;
                          choosedProduct = produk3;
                          switch (tmp) {
                                  case 98:
                                          multiplier = stof(harga3B) * 1000;
                                          choosedProductPrice = h3K;
                                          break;
                                  case 115:
                                          multiplier = stof(harga3S) * 1000;
                                          choosedProductPrice = h3K;
                                          break;
                                  case 107:
                                          multiplier = stof(harga3K) * 1000;
                                          choosedProductPrice = h3K;
                                          break;
                                  default:
                                          cout << "Ukuran Invalid\n";
                                          return 0;
                          }
                          break;
                default:
                          cout << "Pilihan Invalid\n";
                          return 0;
        
        }
        cout << "Masukan Jumlah Pembelian: ";
        cin >> pembelian;
        if(!cin || pembelian < 0){       // Menampilkan Error jika input tidak sesuai
                cout << "Error: Angka anda terlalu besar atau anda memasukan nilai non-numeric\n";
                return 0;
        }

        total = pembelian * multiplier;
        if(total < 0){ // Hasil tidak mungkin Negatif, jika hasilnya negatif maka kemungkinan melebihi batas maks tipe data long
                cout << "Error Saat Menampilkan Hasil (Angka terlalu besar)\n";
                return 0;
        }

        // manipulasi string
        string stotal = to_string(total);
        if(log10(total) >= 3){          // Menambahkan titik agar mempermudah pembacaan (maks sampai triliun)
                stotal.insert(stotal.length()-1 - 2, ".");
        } 
        if(log10(total) >= 6){
                stotal.insert(stotal.length()-1 - 6, ".");
        }
        if(log10(total) >= 9){ //decimal merupakan system numeral dengan base 10
                stotal.insert(stotal.length()-1 - 10, ".");
        }
        if(log10(total) >= 12){
                stotal.insert(stotal.length()-1 - 14, ".");
        }
        cout << "\n\nSusu\t\t\t: " << choosedProduct << '\n' <<
                "Harga per satu susu\t: " << choosedProductPrice << '\n' <<
                "Total Harga\t\t: Rp. " << stotal << ",-" << endl;
}

