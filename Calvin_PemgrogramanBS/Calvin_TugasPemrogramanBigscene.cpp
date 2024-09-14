// Calvin's code, big scene pemrograman
//Ini untuk menghitung kalori harian
#include <iostream>
#include <time.h>

using namespace std;

int main (){

time_t ct=time(0);
string currenttime=ctime (&ct);
cout << "Ini waktu dalam UTC: " << currenttime;

double idealcal, totcal = 0, usedcal;



cout << "Selamat datang di calorie tracker, silahkan masukkan target kalori kamu hari ini: " << endl;
cin >> idealcal;

while (totcal < idealcal) {

cout << "Masukkan calorie yang kamu konsumsi hari ini: " <<endl;
cin >> usedcal;

totcal += usedcal;

if (totcal >= idealcal) { 
    cout << "Selamat, kamu telah mencapai target calorie mu hari ini yaitu "<< idealcal << endl;
}

else  {
    cout << "Calorie yang telah kamu konsumsi ada di: " <<totcal << endl;
    cout << "Sisa calorie kamu adalah: " << idealcal - totcal << endl;

} 


}
return 0;
}