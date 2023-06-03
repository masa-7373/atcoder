#include <iostream>
using namespace std;

int main(){
    int h, a;
    int count = 0;
    cin >> h >> a;
    
    while(h > 0){
        h -= a;
        count++;
    }

    cout << count << endl;
}