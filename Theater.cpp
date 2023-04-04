#include <bits/stdc++.h>
using namespace std;

int main(){
    
    //組数の定義と入力
    int N;
    cin >> N;

    //残席と人数の定義
    int seats_available, seats_unavailable;
    seats_available = 100000;

    for (int i = 0; i < N; i++)
    {
        //1組が何人かの定義と数の入力
        int l, r;
        cin >> l >> r;
        
        //残席を出す
        seats_available = seats_available - (r - l + 1); 
    }
    
    //劇場の席に座っている数
    cout << 100000 - seats_available << endl;
    //seats_unavailable = 100000 - seats_available;
    //cout << seats_unavailable << endl;
}