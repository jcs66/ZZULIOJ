#include <iostream>
using namespace std;

const int a = 1000;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略第一行的换行符
    while (n) {
        char arr[a];
        int i = 0, num = 0;
        while (1) {
            cin.get(arr[i]);
            if (arr[i] == '\n' || arr[i] == '\0')
                break;
            if (arr[i] >= '0' && arr[i] <= '9')
                num++;
            i++;
        }
        cout << num << endl;
        n--;
    }
    return 0;
}
