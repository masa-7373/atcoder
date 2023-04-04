#include <bits/stdc++.h>
using namespace std;

int main(){

    //ひなあられN個の定義と入力
    int N;
    cin >> N;

    for (int i = 0; i < N ; i++) 
    {
        //取り出したひなあられの色の定義
        char S;
        cin >> S;

        //色の判別の条件式
        if (S == 'Y'){
            cout << "Four" << endl;
            break;
        }

        else if (i == N - 1 && S != 'Y'){
            cout << "Three" << endl;
        } 
    }
}