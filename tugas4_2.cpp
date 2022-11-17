#include <iostream>

using namespace std;

int main(){
  string correctUsername = "Admin", correctPasswd = "password";
  string username, passwd;
  
  cout << "Masukan Username: ";
  cin >> username;
  cout << "Masukan Password: ";
  cin >> passwd;

  if(username == correctUsername){
    if(passwd == correctPasswd) cout << "Username dan password sesuai, Login berhasil\n";
    else cout << "Username sesuai, password tidak sesuai!\n";
  }else{
    if(passwd == correctPasswd) cout << "Username tidak sesuai, password sesuai!\n";
    else cout << "Username dan password tidak sesuai!\n";
  }
}




