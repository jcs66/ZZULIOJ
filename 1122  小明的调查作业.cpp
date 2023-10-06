#include <iostream>

using namespace std;

void PrintArr(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;
    int a[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // 去重
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k < N - 1; k++) {
                    a[k] = a[k + 1];
                }
                N--;
                j--;
            }
        }
    }

    // 冒泡排序
    for (int p = 0; p < N - 1; p++) {
        for (int q = 0; q < N - p - 1; q++) {
            if (a[q] > a[q + 1]) {
                int temp = a[q];
                a[q] = a[q + 1];
                a[q + 1] = temp;
            }
        }
    }

    cout << N << endl;
    PrintArr(a, N);

    return 0;
}