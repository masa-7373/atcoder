#include <bits/stdc++.h>
using namespace std;

// i~N-1の範囲にNの約数が存在するかを判定する補助関数'has_divisor'を再帰関数として書く
// 存在するかいないか→bool型

bool has_divisor(int N, int i) {
    // ベースケース１
    if (i == N) {
        //そもそも対象となる整数がないのでfalse
        return false;
    }
    //ベースケース２
    if (N % i == 0) {
        // 実際にiはNの約数なので、i~N-1の範囲に約数が存在する
        return true;
    }

    //再帰ステップ
    // i+1 ~ N-1の範囲の結果がi ~ N-1の範囲の結果となる
    // (ベースケース2によって、iがNの約数の場合は取り除かれているので、あとはi+1 ~ N-1の範囲を調べればよい)
    return has_divisor(N, i + 1);
}

bool is_prime(int N){
    if (N == 1){
        return false;
    }
    else if (N == 2){
        return true;
    }
    else {
        //2~(N-1)の範囲に約数がなければ素数
        return !has_divisor(N, 2);
    }
}

//実用的なものは他にある
int main() {
    cout << is_prime(9877473) <<endl;
}