#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans;
  ans = 1;

  //cout << S.size() << endl;

  for (int i = 0 ; i < S.size() ; i++)
{
    if (S.at(i) == '+')
    {
        ans++;
    }

    else if (S.at(i) == '-')
    {
        ans--;
    }

}  

cout << ans << endl;

}
