#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct kont {
    int id;
    string vardas;
    string pavarde;
    string tel;
    string email;
};




void pridKont(vector<kont>& kontaktai, int& nextId) {
    kont naujKont;
    naujKont.id = nextId++;
    cout << "Iveskite varda: ";
    cin >> naujKont.vardas;
    cout << "iveskite pavarde: ";
    cin >> naujKont.pavarde;
    cout << "Iveskite telefono numeri: ";
    cin >> naujKont.tel;
    cout << "Iveskite el. pasta: ";
    cin >> naujKont.email;
    kontaktai.push_back(naujKont);
    cout << "Kontaktas pridetas sekmingai!" << endl;
}

void skaitKont(const vector<kont>& kontaktai) {
    if (kontaktai.empty()) {
        cout << "Kontaktu sarasas tuscias." << endl;
        return;
    }
    cout << "\nKontaktu sarasas:" << endl;
    for (const auto& contact : kontaktai) {
        cout << "ID: " << contact.id << ", Vardas: " << contact.vardas
             << ", Pavarde: " << contact.pavarde << ", Telefonas: " << contact.tel
             << ", El. pastas: " << contact.email << endl;
    }
}

void tvarkKont(vector<kont>& kontaktai) {
    int id;
    cout << "Iveskite norimo redaguoti kontakto ID: ";
    cin >> id;
    for (auto& contact : kontaktai) {
        if (contact.id == id) {
            cout << "Redaguojate kontakta (ID: " << id << "):" << endl;
            cout << "Dabartinis vardas: " << contact.vardas << ", Naujas vardas: ";
            cin >> contact.vardas;
            cout << "Dabartine pavarde: " << contact.pavarde << ", Nauja pavarde: ";
            cin >> contact.pavarde;
            cout << "Dabartinis telefonas: " << contact.tel << ", Naujas telefonas: ";
            cin >> contact.tel;
            cout << "Dabartinis el. pastas: " << contact.email << ", Naujas el. pastas: ";
            cin >> contact.email;
            cout << "Kontaktas atnaujintas sekmingai!" << endl;
            return;
        }
    }
    cout << "Kontaktas su ID " << id << " nerastas." << endl;
}

void trintKont(vector<kont>& kontaktai) {
    int id;
    cout << "Iveskite kontakto ID, kuri norite pasalinti: ";
    cin >> id;
    for (auto it = kontaktai.begin(); it != kontaktai.end(); ++it) {
        if (it->id == id) {
            kontaktai.erase(it);
            cout << "Kontaktas su ID " << id << " pasalintas." << endl;
            return;
        }
    }
    cout << "Kontaktas su ID " << id << " nerastas." << endl;
}





int main() {
    vector<kont> kontaktai; // Dinamiškas kontaktų saugojimas
    int kitas = 1; // Automatinis ID generavimas
    int pasirinkimas;

    do {
        cout << "\n Kontaktu valdymo sistema" << endl;
        cout << "1. Prideti kontakta" << endl;
        cout << "2. Atspausdinti visus kontaktus" << endl;
        cout << "3. Redaguoti kontakta" << endl;
        cout << "4. Pasalinti kontakta" << endl;
        cout << "0. Iseiti" << endl;
        cout << "Pasirinkite veiksma: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                pridKont(kontaktai, kitas);
                break;
            case 2:
                skaitKont(kontaktai);
                break;
            case 3:
                tvarkKont(kontaktai);
                break;
            case 4:
                trintKont(kontaktai);
                break;
            case 0:
                cout << "Programa baige darba." << endl;
                break;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    } while (pasirinkimas != 0);

    return 0;
}
