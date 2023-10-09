#include <iostream>

using namespace std;
const int M = 100;
const int N = 10;
int main() {
    int m, p, n;
    cin >> m >> p >> n;
    int a[M][N], b[N][M], c[M][M] ={0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int x = 0; x < p; x++) {
                c[i][j] += a[i][x] * b[x][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
