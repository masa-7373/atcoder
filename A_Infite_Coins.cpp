#include <bits/stdc++.h>
using namespace std;

int main() {
    //A枚の1円玉と無限枚の500円玉でN円をちょうど払うことができるか
    int A, N;
    
    cin >> A >> N;

    if (N % 500 <= A) {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}