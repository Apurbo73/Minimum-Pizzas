#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int totalSlices = N * X;
        int pizzas = (totalSlices + 3) / 4;
        cout << pizzas << endl;
    }

    return 0;
}