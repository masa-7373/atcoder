#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;

    //N人のためのN個の要素数を作る
    vector<int> vec(N);
    
    for (int i = 0 ; i < N; i++)
    {
        cin >> vec[i];

        //合計を出す
        sum += vec[i];
    }

    //平均値を求める
    int average;
    average = sum / N;

    for (int i = 0; i < N; i++)
    {
        if (vec[i] > average)
        {
            cout << vec[i] - average << endl;
        }
        else
        {
            cout << average - vec[i] << endl;
        }
    }
}