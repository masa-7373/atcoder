#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int sum = N;

    for (int i = 0; i < N; i++){
        sum += i;
    }
    cout << sum <<endl;
}