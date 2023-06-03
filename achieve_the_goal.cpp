#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k, m;
    int total = 0;
    int r;

    cin >> n >> k >> m;
    for (int i = 0; i < n-1; i++){
        int a;
        cin >> a;
        total += a;
    }

    r = n * m - total;
    if (r < 0){
        cout << 0 << endl;
    }
    else if (r > k){
        cout << -1 << endl;
    }
    else{
        cout << r << endl;
    }

}