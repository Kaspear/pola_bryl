#include <iostream>

using namespace std;

void squareArea() {
    cout << "\nWprowadz dlugosc boku:";
    float length;
    cin >> length;
    if (length <= 0) {
        while (length <= 0) {
            cout << "Bledna wartosc, wprowadz dodatnia:";
            cin >> length;
        }
    }
    cout << "Pole kwadratu jest rowne: " << length * length << endl;
}

void squareCircuit() {
    cout << "\nWprowadz dlugosc boku:";
    float length;
    cin >> length;
    if (length <= 0) {
        while (length <= 0) {
            cout << "Bledna wartosc, wprowadz dodatnia:";
            cin >> length;
        }
    }
    cout << "Obwod kwadratu jest rowny: " << length * 4 << endl;
}

void square() {
    cout << "\nKwadrat:\n1.Pole\n2.Obwod" << endl;

    int answer;
    cin >> answer;

    switch (answer) {
        case 1:
            squareArea();
            break;
        case 2:
            squareCircuit();
            break;
        default:
            cout << "Wprowadziles bledny znak" << endl;
    }
};

int main() {
    cout << "Wskaz figure geometryczna" << endl;
    cout << "1.Kwadrat\n2.Prostokat\n3.Romb" << endl;

    int answer;
    cin >> answer;

    switch (answer) {
        case 1:
            square();
            break;
//        case 2:
//            licz2();
            break;
        default:
            cout << "Wprowadzile bledna odpowiedz" << endl;
    }
    return 0;
}
