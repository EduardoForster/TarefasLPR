#include <iostream>

using namespace std;

int main() {
    int A, B;

    cout << "Digite o valor A: ";
    cin >> A;
    cout << "Digite o valor B: ";
    cin >> B;

    if ((A % B == 0) || (B % A == 0)) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}