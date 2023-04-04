#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x; //入力を受ける値
    int a_x;
    
    
    cin >> a, b, x;

    int b_x = b / x;

    if (a == 0){
        b_x = (b / x) + 1;
    }
    else{
        b_x = b / x;
    }

    if (a == 0){
        a_x = 0;
    }
    else{
        a_x = (a - 1) / x;
    }

    cout << b_x;
}