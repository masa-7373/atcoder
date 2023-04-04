#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin >> a;
  int count = 0;
  vector<int> data(5);
  for (int i = 0; i < 5; i++)
  {
    cin >> data.at(i);
    
  
    if (a == data.at(i))
    {
      count ++;
    }
  }
  cout << count <<endl;
}