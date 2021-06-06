#include <iostream>
#include <stdio.h>
using namespace std;
int x = 0;
bool isValid(int n, int k);
void queens(int row, int total, int n);
bool partial[8][8];

int main(int argc, char *argv[]) {
    int k = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            partial[i][j] = -1;
        }
    }

    queens(8, k, 4);

    return 0;
}

void queens(int row, int total, int n) {
    if (total == n) {
        x++;
        cout << "Solucion " << x << " : ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << partial[i][j] << " , ";
            }
        }
    } else
        for (int col = 0; col < n; col++) {
            if (isValid(row, col)) {
                partial[row][col] = true;
                queens(row + 1, total + 1, n);
                partial[row][col] = false;
            }
        }
}

bool isValid(int n, int k) {
    int i;
    for (i = 0; i < k; i++) {
        if ((partial[i] == partial[k]) || (abs(k - i) == abs(partial[k] - partial[i]))) {
            return false;
        }
    }
    return true;
}