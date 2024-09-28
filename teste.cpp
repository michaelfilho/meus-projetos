#include <iostream>
using namespace std; 

bool pertenceFibonacci(int n) {
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b == n;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero;
    cout << "Informe um n�mero: ";
    cin >> numero;

    if (pertenceFibonacci(numero)) {
        cout << "O n�mero " << numero << " pertence � sequ�ncia de Fibonacci." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o pertence � sequ�ncia de Fibonacci." << endl;
    }

    system("pause");
}
