#include <bits/stdc++.h>
using namespace std;

int main(){
    // white >> number_w
    // black >> number_b
    // n * n マス
     int N, number_w, number_b;
     cin >> N >> number_w ;

     number_b = N * N - number_w;
     cout << number_b << endl;
     
}