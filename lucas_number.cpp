#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // こういう使い方をすることができるのを初めて知った。
    long long l[86];
    l[0] = 2ll;
    l[1] = 1ll;



    for (int i = 2; i <= n; i++) {
        
        l[i] = l[i - 1] + l[i - 2];
    }

    cout << l[n] << endl;
}
