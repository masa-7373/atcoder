#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>>b(r, vector<char>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (b[i][j] == '1') {
                b[i][j] = '.';
                while ((i - 1 > 0 && j - 1 > 0) || (i - 1 > 0 && j + 1 < c) || (i + 1 < r && j - 1 > 0) || (i + 1 < r && j + 1 < c)) {
                    b[i - 1][j - 1] = '.';
                    b[i - 1][j + 1] = '.';
                    b[i + 1][j - 1] = '.';
                    b[i + 1][j + 1] = '.';
                }
            }
            else if (b[i][j] == '2') {
                b[i][j] = '.';
                while ((i - 2 > 0 && j - 2 > 0) || (i - 2 > 0 && j + 2 < c) || (i + 2 < r && j - 2 > 0) || (i + 2 < r && j + 2 < c)) {
                    b[i - 2][j - 2] = '.';
                    b[i - 2][j + 2] = '.';
                    b[i + 2][j - 2] = '.';
                    b[i + 2][j + 2] = '.';
                }
            }
            else if (b[i][j] == '3') {
                b[i][j] = '.';
                while ((i - 3 > 0 && j - 3 > 0) || (i - 3 > 0 && j + 3 < c) || (i + 3 < r && j - 3 > 0) || (i + 3 < r && j + 3 < c)) {
                    b[i - 3][j - 3] = '.';
                    b[i - 3][j + 3] = '.';
                    b[i + 3][j - 3] = '.';
                    b[i + 3][j + 3] = '.';
                }
            }
                            else if (b[i][j] == '4') {
                    b[i][j] = '.';
                    while ((i - 4 > 0 && j - 4 > 0) || (i - 4  > 0 && j + 4 < c) || (i + 4 < r && j - 4 > 0 ) || (i + 4 < r && j + 4 < c)) {
                        b[i - 4][j - 4] = '.';
                        b[i - 4][j + 4] = '.';
                        b[i + 4][j - 4] = '.';
                        b[i + 4][j + 4] = '.';
            }
        }
                        else if (b[i][j] == '5') {
                    b[i][j] = '.';
                    while ((i - 5 > 0 && j - 5 > 0) || (i - 5  > 0 && j + 5 < c) || (i + 5 < r && j - 5 > 0 ) || (i + 5 < r && j + 5 < c)) {
                        b[i - 5][j - 5] = '.';
                        b[i - 5][j + 5] = '.';
                        b[i + 5][j - 5] = '.';
                        b[i + 5][j + 5] = '.';
            }
        }
                else if (b[i][j] == '6') {
                    b[i][j] = '.';
                    while ((i - 6 > 0 && j - 6 > 0) || (i - 6  > 0 && j + 6 < c) || (i + 6 < r && j - 6 > 0 ) || (i + 6 < r && j + 6 < c)) {
                        b[i - 6][j - 6] = '.';
                        b[i - 6][j + 6] = '.';
                        b[i + 6][j - 6] = '.';
                        b[i + 6][j + 6] = '.';
            }
        }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << b[i][j];
                if (j == c - 1) {
                    cout << endl; //行末は改行
                }
                else {
                    cout << " ";
                }

            }
        }
    }