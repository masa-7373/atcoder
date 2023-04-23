#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, t;
    vector<vector <long long>> table(2, vector<long long>(n));
    vector<vector <long long>> wintable(2, vector<long long>(n));

    cin >> n >> t;
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            cin >> table.at(i).at(j);
        }
    }
    
    for (int i = 0; i < n; i++){
        if (table.at(0).at(i) == t){
            for (int j = 0; j < n; j++){
                wintable.at(j).at(0) = i + 1;
                wintable.at(j).at(1) = table.at(i).at(1);
            }
        }
    }

    wintable[i][1].sort

}
