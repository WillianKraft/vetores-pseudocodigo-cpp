/*
 * Exercicio 10 - Tempo de resposta de chamados
 * Objetivo: consolidar vetores, repeticao, media e decisoes.
 *
 * Le os tempos (em minutos) dos 12 ultimos chamados, sem aceitar negativos.
 *   ate 15 minutos        -> Rapido
 *   de 16 a 30 minutos    -> Adequado
 *   acima de 30 minutos   -> Demorado
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int tempos[12];
    int soma = 0;
    int rapidos = 0;
    int adequados = 0;
    int demorados = 0;
    int menor, maior;
    float media;

    for (int i = 0; i < 12; i++) {
        do {
            cout << "Tempo de resposta do chamado " << i + 1 << " (min): ";
            cin >> tempos[i];

            if (tempos[i] < 0) {
                cout << "Valor invalido! O tempo nao pode ser negativo." << endl;
            }
        } while (tempos[i] < 0);
    }

    menor = tempos[0];
    maior = tempos[0];

    cout << "\nClassificacao dos chamados:" << endl;
    for (int i = 0; i < 12; i++) {
        soma = soma + tempos[i];

        cout << "Chamado " << i + 1 << " (" << tempos[i] << " min): ";

        if (tempos[i] <= 15) {
            cout << "Rapido" << endl;
            rapidos++;
        }
        else if (tempos[i] <= 30) {
            cout << "Adequado" << endl;
            adequados++;
        }
        else {
            cout << "Demorado" << endl;
            demorados++;
        }

        if (tempos[i] < menor) {
            menor = tempos[i];
        }
        if (tempos[i] > maior) {
            maior = tempos[i];
        }
    }

    media = soma / 12.0;

    cout << "\nResumo:" << endl;
    cout << "Tempo medio de resposta: " << fixed << setprecision(2) << media << " min" << endl;
    cout << "Rapidos: " << rapidos << endl;
    cout << "Adequados: " << adequados << endl;
    cout << "Demorados: " << demorados << endl;
    cout << "Menor tempo: " << menor << " min" << endl;
    cout << "Maior tempo: " << maior << " min" << endl;

    return 0;
}
