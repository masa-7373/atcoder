#include <bits/stdc++.h>
using namespace std;

int main(){
    //char c = 'a'; 文字型
    //cout << c << endl; //a
    
    //string str = "Hello";

    //char c = str.at(4); //char型の値が得られる

    // //cout << c << endl; //o

    //str.at(0) = 'M'; //char型の'M'
    //cout << str << endl; //Mello
    
    //if (str.at(1) == 'l'){
        //cout << "AtCoder" << endl;
    //}
     string str;
     cin >> str;

     int count = 0;
     for (int i = 0; i < str.size(); i++){
        if (str.at(i) == '0'){
            count++;
        }
     }

     cout << count << endl;
}