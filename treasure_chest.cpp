#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    int as, bar1, bar2;
    vector<int> bar;

    for (int i = 0; i < n; i++){
        if (s.at(i) == '|'){
            bar.push_back(i);
        }
        else if (s.at(i) == '*'){
            as = i;
        }
    }

    bar1 = bar[0];
    bar2 = bar[1];

    if (bar1 < as && as < bar2){
        cout << "in" << endl;
    }
    else {
        cout << "out" << endl;
    }
}