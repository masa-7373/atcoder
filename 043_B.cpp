#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string r = " ";

    for (int i = 0; i < s.size(); i++){
        if (s.at(i) == '0'){
            r += '0';
        }
        else if (s.at(i) == '1'){
            r += '1';
        }
        else if (s.at(i) == 'B'){
            if (r == " "){
                continue;
            }
            else {
                r.pop_back();
            }
        }
    }

    cout << r << endl;   
}