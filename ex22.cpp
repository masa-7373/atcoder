#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair <int, int>>p(n);

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        // bが小さい順に並び替えるために
        p[i] = make_pair(b, a);
    }

    // 配列を要素が小さい順に並べ替えるために
    sort(p.begin(), p.end());

    for(int i = 0; i < n; i++){
        int b, a;
        // pairを分解できるtie
        tie(b, a) = p[i];
        cout << a << " " << b << endl;
    }
}