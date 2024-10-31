#include <iostream>
using namespace std;

/*
keitimas sujungia pirkima ir pardavima, parduoti galima keiciant i eurus
*/

int main() {


    double EUR[3] {1,1,1},  GBP[3] {0.8593,0.8450,0.9060}, USD[3] {1.0713,1.0547,1.1309}, INR[3] {88.8260,85.2614,92.8334};

    string val_var;
    double val_a;
    string val_b;
    string val_c;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (val_var != "palyginti" && val_var != "keisti") {
        cout <<"Iveskite veiksma (palyginti, keisti): \n";
        cin >> val_var;
    }

    cout << "Galimos valiutos: EUR, GBP, USD, INR\n";
    cout << "Iveskite suma, pirma valiuta ir antra valiuta (atskirtus tarpais, pvz.:'1.5 USD EUR'):\n";
    cin >>val_a >>val_b >>val_c;

    if (val_var=="palyginti") {
        cout <<val_a<<' '<<val_b<<" = "    <<val_a/val_b[0]*val_c[0]   <<' '<<val_c   <<endl;
    } else if (val_var=="keisti") {
        cout <<val_a<<' '<<val_b<<" = "    <<val_a/val_b[2]*val_c[1]   <<' '<<val_c   <<endl;
    }

        return 0;
}
