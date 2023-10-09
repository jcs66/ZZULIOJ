#include <iostream>

using namespace std;
const int M = 1000, N = 10;

int main() {
	int m, n;
	cin >> m >> n;
	double a[M][N];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		double sum = 0;
		for (int j = 0; j < m; j++) {
			sum += a[j][i];
		}
		printf("%.2lf ",sum / m);
	}
	return 0;
}