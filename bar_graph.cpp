#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  //A
  cout << "A :";
  while (A > 0){
    cout << "]";
    A -= 1;
  }
  cout << endl;
  
  //B
  cout << "B :";
  while (B > 0){
    cout << "]";
    B --;
  }
  cout << endl;
}
