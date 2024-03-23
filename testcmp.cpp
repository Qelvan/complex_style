#include <iostream>
#include "mycomplex.h"

using namespace std;

int main() {
    Complex complexA, complexB(-4), complexC(23.0, 45.9);

    cout << complexA << "," << complexB << "," << complexC << endl;
    complexA = complexB + complexC;
    cout << "A = B + C, A = " << complexA << endl;

    Complex complexM = complexB - complexC;
    cout << "M = B - C, M = " << complexM << endl;
    cout << "M * A = " << complexM * complexA << endl;
    cout << "M / 4.45 = " << complexM / 4.45 << endl;

    Complex complexD;
    cout << "Enter complex number D = ";
    cin >> complexD;

    complexA += complexC + complexD;
    cout << "D = " << complexD << "\nA = " << complexA << endl;

    return 0;
}
