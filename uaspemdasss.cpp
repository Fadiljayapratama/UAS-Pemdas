#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;

int main () {

    system("cls");

    float n;
    float x[100];
    float y[100];
    float xy[100];
    float x2[100];
    float y2[100];
    float r; //Korelasi Pearson
    float d; //Koefisien Determinasi
    float xsum;
    float ysum;
    float xysum;
    float x2sum;
    float y2sum;

    cout << "Masukkan Banyak Data: "; cin >> n;
    cout << endl;
     for (int i = 1; i <= n; i++) {
        do {
            cout << "Data X ke-" << i << ": "; cin >> x[i];
            x2[i] = x[i]*x[i];
            xsum = xsum + x[i];
        
        } while (x[i] < 0);
        
        do {
            cout << "Data Y ke-" << i << ": "; cin >> y[i];
            y2[i] = y[i]*y[i];
            ysum = ysum + y[i];
            
        } while (y[i] < 0);

        xy[i] = x[i]*y[i];
        xysum = xysum + xy[i];
        x2sum = x2sum + x2[i];
        y2sum = y2sum + y2[i];
     }
     cout << endl;

     cout << "Total X: " << xsum << endl;
     cout << "Total Y: " << ysum << endl;
     cout << "Total XY: " << xysum << endl;
     cout << "Total X^2: " << x2sum << endl;
     cout << "Total Y^2: " << y2sum << endl;
     
     cout << endl;
     r = ((n*xysum) - (xsum*ysum)) / (sqrt(n*x2sum - (xsum*xsum))) *  (sqrt(n*y2sum - (ysum*ysum)));
     cout << "Nilai Korelasi Pearson: " << r << endl;
     
     cout << endl;
     d = (r*r) * 100/100;
     cout << "Nilai Koefisien Determinasi: " << d << endl;
     
     cout << endl;
     
     if (r > 0) {
        cout << "Hubungan antara variable X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya" << endl;
     }

     else if (r < 0) {
        cout << "Hubungan antara variable X dan Y adalah negatif, dimana jika nilai X bertambah, maka nilai Y akan mengecil, dan juga sebaliknya" << endl;
     }

     else {
        cout << "Tidak ada hubungan antara variable X dan Y" << endl;
     }
    return 0;
}

