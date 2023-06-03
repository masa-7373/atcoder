#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int h, n, a[10002];
    int sum = 0;
    cin >> h >> n;
    for (int i = 0; i < n; i++) cin >> a[i], sum+=a[i];

    if (sum < h) cout << "No" << endl;
    else cout << "Yes" << endl;
}