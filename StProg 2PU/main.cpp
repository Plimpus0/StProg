#include <iostream>
using namespace std;

bool balse(char raide){
    switch(tolower(raide)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

//euklido algoritmas???
int daliklis(int a, int b){
    return b == 0 ? a : daliklis(b, a%b);
}

void zaidimas(){
    int sk;
    sk = rand()%100;
    int spejimas = 0;
    while ( spejimas != sk ) {
        cout << "Iveskite savo spejima nuo 1 iki 100:\n";
        cin >> spejimas;
        if (spejimas > sk) {
            cout << "maziau!\n";
        }
        else if (spejimas < sk) {
            cout << "daugiau!\n";
        }
    }
    cout<< "Sveikname, atspejote!\n";
}

void fizzbuzz(int n){
    for (int i=1; i<=n; i++){
        if (i%3==0 and i%5==0){
            cout << "FizzBuzz ";
        }
        else if (i%3==0){
            cout << "Fizz ";
        }
        else if(i%5==0){
            cout << "Buzz ";
        }
        else{
            cout << i << " ";
        }

    }
}




int main() {
    int pasirinkimas;
    int i_sk1;
    int i_sk2;
    char i_raide;

    while (true){

        cout << "\nPasirinkite funkcija ivesdami jos numeri: \n1. Tikrina ar ivesta rade yra balse.\n"
                "2. Randa didziausia bendra dalikli.\n3. Skaiciaus speliojimo zaidimas.\n4. FizzBuzz.\n";
        cin >> pasirinkimas;

        switch(pasirinkimas){
            case 1:
                cout << "Iveskite raide: \n";
                cin >> i_raide;
                cout << boolalpha << balse(i_raide) << endl;
                break;
            case 2:
                cout << "Iveskite du skaitmenis: \n";
                cin >> i_sk1 >> i_sk2;
                cout << daliklis(i_sk1, i_sk2);
                break;
            case 3:
                zaidimas();
                break;;
            case 4:
                int n;
                cout << "Iveskite teigiama sveikaji skaiciu:\n";
                cin >> n;
                fizzbuzz(n);
                break;
            default:
                cout << "Nera tokios funkcijos.";
        }
    }
}
