#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    int count_c, count_b;
    count_c = 0;
    count_b = 0;

    cin >> n >> s;

    for (int i = 0; i < n ; i++){
        if (s.at(i) == 'o') {
            count_c++;
        }
        else if (s.at(i) == 'x') {
            count_b++;
        }
    }

    if (count_c > 0 && count_b == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}