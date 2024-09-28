#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

bool pertenceFibonacci(int num) {
    int a = 0, b = 1, next = 0;
    while (next < num) {
        next = a + b;
        a = b;
        b = next;
    }
    return (next == num || a == num);
}

void inverterString(const string& str, string& invertida) {
    for (int i = str.length() - 1; i >= 0; i--) {
        invertida += str[i];
    }
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    cout << "SOMA: " << SOMA << endl;

    int numero;
    cout << "Informe um número para verificar na sequência de Fibonacci: ";
    cin >> numero;
    if (pertenceFibonacci(numero)) {
        cout << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << numero << " não pertence à sequência de Fibonacci." << endl;
    }

    double faturamento[30] = {1000.50, 2000.75, 0, 1500.00, 3000.40, 0, 2500.30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Exemplo de dados
    double menor = numeric_limits<double>::max();
    double maior = numeric_limits<double>::min();
    double soma = 0;
    int diasComFaturamento = 0;

    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > 0) {
            if (faturamento[i] < menor) menor = faturamento[i];
            if (faturamento[i] > maior) maior = faturamento[i];
            soma += faturamento[i];
            diasComFaturamento++;
        }
    }

    double media = soma / diasComFaturamento;
    int diasAcimaMedia = 0;
    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > media) diasAcimaMedia++;
    }

    cout << "Menor faturamento: " << menor << endl;
    cout << "Maior faturamento: " << maior << endl;
    cout << "Dias acima da média: " << diasAcimaMedia << endl;

    double faturamentoEstados[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    string estados[5] = {"SP", "RJ", "MG", "ES", "Outros"};
    double total = 0;

    for (int i = 0; i < 5; i++) {
        total += faturamentoEstados[i];
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < 5; i++) {
        double percentual = (faturamentoEstados[i] / total) * 100;
        cout << "Percentual de " << estados[i] << ": " << percentual << "%" << endl;
    }

    string texto;
    cout << "Informe uma string para inverter: ";
    cin.ignore(); 
    getline(cin, texto);
    
    string resultado;
    inverterString(texto, resultado);
    cout << "String invertida: " << resultado << endl;

    return 0;
}
