#include <iostream>
using namespace std;
int main(){
  int tahun;
  cout << "Masukan tahun: ";
  if(cin >> tahun && !tahun <= 0) //di Anno Domini calendar tidak ada tahun 0
  {  
    if(!(tahun % 400)) cout << "Tahun " << tahun << " merupakan tahun kabisat\n";
    else{
      if(!(tahun % 100)) cout << "Tahun " <<  tahun << " bukan merupakan tahun kabisat\n";
      else if(!(tahun % 4)) cout << "Tahun " << tahun << " merupakan tahun kabisat\n";
      else cout << "Tahun " << tahun << " bukan merupakan tahun kabisat\n";
    }
  }else cout << "Nilai Tahun Invalid\n";
}
