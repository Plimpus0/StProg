#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y;

    cout << "Iveskite lenteles eiluciu skaiciu: ";
    cin >> x;
    cout << "Iveskite lenteles stulpeliu skaiciu: ";
    cin >> y;

    int** lentele = new int*[x];
    for (int i = 0; i < x; i++) {
        lentele[i] = new int[y];
    }




    cout << "Iveskite lenteles reiksmes:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Reiksme [" << i << "][" << j << "]: ";
            cin >> lentele[i][j];
        }
    }

    cout << "\nLentele:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << setw(5) << lentele[i][j];
        }
        cout << endl;
    }

    cout << "\nEiluciu sumos:" << endl;
    for (int i = 0; i < x; i++) {
        int Xsuma = 0;
        for (int j = 0; j < y; j++) {
            Xsuma += lentele[i][j];
        }
        cout << "Eilute " << i << " suma: " << Xsuma << endl;
    }

    cout << "\nStulpeliu sumos:" << endl;
    for (int j = 0; j < y; j++) {
        int Ysuma = 0;
        for (int i = 0; i < x; i++) {
            Ysuma += lentele[i][j];
        }
        cout << "Stulpelis " << j << " suma: " << Ysuma << endl;
    }

    int max = lentele[0][0];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (lentele[i][j] > max) {
                max = lentele[i][j];
            }
        }
    }
    cout << "\nDidziausia reiksme lenteleje: " << max << endl;




    for (int i = 0; i < x; i++) {
        delete[] lentele[i];
    }
    delete[] lentele;

    return 0;
}