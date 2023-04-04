#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int sum = 0;

    for (int i = 0; i < n; i++){
        if (i < k){
            sum += x;
        }
        else {
            sum += y;
        }
    }
    cout << sum << endl;
}