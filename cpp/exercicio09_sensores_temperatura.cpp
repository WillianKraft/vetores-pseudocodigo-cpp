/*
 * Exercicio 9 - Sensores de temperatura
 * Objetivo: usar vetor com validacao, DO WHILE e classificacao condicional.
 *
 * Aceita apenas temperaturas entre -20 C e 150 C.
 *   abaixo de 40 C        -> Normal
 *   de 40 C a 60 C        -> Atencao
 *   acima de 60 C         -> Critica
 */
#include <iostream>

using namespace std;

int main() {

    float temperaturas[8];
    int normal = 0;
    int atencao = 0;
    int critica = 0;
    float maior;

    for (int i = 0; i < 8; i++) {
        do {
            cout << "Temperatura do sensor " << i + 1 << " (C): ";
            cin >> temperaturas[i];

            if (temperaturas[i] < -20 || temperaturas[i] > 150) {
                cout << "Valor invalido! Digite entre -20 e 150." << endl;
            }
        } while (temperaturas[i] < -20 || temperaturas[i] > 150);
    }

    maior = temperaturas[0];

    cout << "\nClassificacao das leituras:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Sensor " << i + 1 << " (" << temperaturas[i] << " C): ";

        if (temperaturas[i] < 40) {
            cout << "Normal" << endl;
            normal++;
        }
        else if (temperaturas[i] <= 60) {
            cout << "Atencao" << endl;
            atencao++;
        }
        else {
            cout << "Critica" << endl;
            critica++;
        }

        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }

    cout << "\nResumo:" << endl;
    cout << "Normal: " << normal << endl;
    cout << "Atencao: " << atencao << endl;
    cout << "Critica: " << critica << endl;
    cout << "Maior temperatura: " << maior << " C" << endl;

    return 0;
}
