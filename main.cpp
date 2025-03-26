#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    
    int i, n, j, t;
    bool scambio;

    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n < 0);
    int r[n];

    for (i = 0; i <= n - 1; i++) {
        r[i] = rand() % (n * 10 + 1);
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        if (r[i] % 2 == 0) {
            cout << r[i] << endl;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        if (r[i] % 2 == 0) {
        } else {
            cout << r[i] << endl;
        }
        i = i + 1;
    }
}