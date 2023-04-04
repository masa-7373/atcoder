#include <bits/stdc++.h>
using namespace std;

int main() {
  //string str1;
  //string str = "Hello";
  //cout << str.size() << endl;
  //cout << str.at(2) << endl; //l

  string hello = "Hello";
  //cout << str.size() << endl; //5
  //cout << "Hello"s.size() << endl; //5(sを末尾につける)

  //+演算子による連結
  cout << hello + ", world!" << endl; //Hello, World! 

  //+=演算子による連結
  hello += ",AtCoder!";
  cout << hello << endl;

}