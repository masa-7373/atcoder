#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int A, B, C;

  vector<int> vec(3);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i]; 
  }

  sort(vec.begin(), vec.end());
  cout << vec[vec.size() -1] - vec[0] <<endl;

}
