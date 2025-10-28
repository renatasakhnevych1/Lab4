#include <iostream>
using namespace std;

//1
//void wypisWiekszej(int a, int b) {
//    if (a > b) {
//        cout << "Liczba większa to: " << a << endl;
//    }else if (a < b) {
//        cout << "Liczba większa to: " << b << endl;
//    }else{
//        cout << "Są równe" << endl;
//    }
//}
//int zwrotWiekszej(int a, int b) {
//    if (a > b) {
//        return a;
//    }else if (a < b) {
//        return b;
//    }else {
//        return 0;
//    }
//}



//2
//void wyswietlaDzielnki(int unsigned n) {
//    for (int unsigned i=1; i <= n/2; i++) {
//        if (n % i == 0) {
//            cout << i << ", ";
//        }
//    }
//}


//3
//double wynik = 0; 
//double dodawanie(double a, double b) {
//    wynik = a + b;
//    return wynik;
//}
//
//double odejmowanie(double a, double b) {
//    wynik = a - b;
//    return wynik;
//}
//
//double mnożenie(double a, double b) {
//    wynik = a * b;
//    return wynik;
//}
//double dzielenie(double a, double b) {
//    if(b==0){
//        cout << "Nie można dzielić przez 0!" << endl;
//        return 0;
//    }
//    else {
//        wynik = a / b;
//        return wynik;
//    }
//}

//4

//int potega(int unsigned a, int unsigned b) {
//    for (int unsigned i = 1; i < b; i++) {
//        a *= a;
//    }
//    return a;
//}

//5
//int wynik=1;
//int silnia(int n) {
//    for (int i = 1; i <= n; i++) {
//        wynik *= i;
//    }
//    return wynik;
//}

//6
//int wynik = 2;
//int potega(int n) {
//        for (int unsigned i = 1; i < n; i++) {
//            wynik *= 2;
//        }
//        return wynik;
//    }


//7
void losowanie(int szczesliwyNumerek) {

}

int main(){
    setlocale(LC_CTYPE, "polish");
    //1
    /*int a, b;
    cout << "Podaj a:" << endl;
    cin >> a;
    cout << "Podaj b:" << endl;
    cin >> b;

    wypisWiekszej(a,b);
    cout << "Zwrócona liczba większa: " << zwrotWiekszej(a, b) << endl;*/

    //2
    /*int unsigned n;
    cout << "Podaj liczbę dodatnią: " << endl;
    cin >> n;
    cout << "Wszystkie dzielniki: ";
    wyswietlaDzielnki(n);*/


    //3
    /*double a, b;
    char opcja;
    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj drugą liczbę: " << endl;
    cin >> b;
    cout << "Podaj działanie '+', '-', '*', '/': " << endl;
    cin >> opcja;
    switch (opcja) {
    case '+':
        cout<<"Wynik to: "<<dodawanie(a, b);
        break;
    case '-':
        cout << "Wynik to: " << odejmowanie(a, b);
        break;
    case '*':
        cout << "Wynik to: " << mnożenie(a, b);
        break;
    case '/':
        cout << "Wynik to: " << dzielenie(a, b);
        break;
    }*/

    //4
    /*int unsigned a, b;
    cout << "Podaj a:" << endl;
    cin >> a;
    cout << "Podaj b:" << endl;
    cin >> b;
    cout<<"Wynik potegowania: "<<potega(a, b);*/


    //5
    /*int n;
    cout << "Podaj n:" << endl;
    cin >> n;
    cout << "Wynik silni: " << silnia(n);*/

    //6
    /*int n;
    cout << "Podaj n:" << endl;
    cin >> n;
    cout << "Wynik silni: " << potega(n);*/

    //7
    int szczesliwyNumerek;

    cout << "Podaj szczęśliwy numerek: "<<endl;
    cin >> szczesliwyNumerek;
}
