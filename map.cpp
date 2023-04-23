#include <bits/stdc++.h>
using namespace std;

int main() {
    // mapの宣言
    // map< Keyの型, Valueの型> 変数名;
    //初期状態
    map<string, int> score;
    score["Alice"] = 100;
    score["Dave"] = 95;
    score["Bob"] = 89;

    //{scoreに対する処理}

    //値の追加
    // 変数[key] = value; 
    score["Charlie"] = 70;

    //値の削除
    // 変数.erase(key);
    score.erase("Bob");

    //アクセス
    // keyに対応するvalueが存在しない場合はエラーになる
    // 変数.at(key);
    // keyに対応するvalueが存在しない場合はValueの型の初期値が追加される
    // 変数[key];

    //所属判定
    // if (変数.count(key)) {
    //     //keyに対応する関係が存在する
    // }
    // else {
    //     //keyに対応する関係が存在しない
    // }

    if (score.count("Alice")) {
        cout << "Alice: " << score.at("Alice") << endl;
    }
    if (score.count("Jiro")) {
        cout << "Jiro: " << score.at("Jiro") << endl;
    }

    //ループ
    // Keyの値が小さい順にループ

    // for (pair<Keyの型, Valueの型> p : 変数名) {
    //     Keyの型 key = p.first;
    //     Valueの型 value = p.second;
    //     // key, valueを使う
    // }

    // autoを用いると、楽になる
    // for (auto p : 変数名){
    //     auto key = p.first;
    //     auto value = p.second;
    //     // key, valueを使う
    // }

    // scoreの内容を全て出力する例
    for (auto p : score) {
        auto k = p.first;
        auto v = p.second;
        cout << k << " => " << v << endl;
    }




}