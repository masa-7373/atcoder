#include <bits/stdc++.h>
using namespace std;

int main(){

    // n行n列の行列
    int n;

    vector<vector<int>>a(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>>b(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
}