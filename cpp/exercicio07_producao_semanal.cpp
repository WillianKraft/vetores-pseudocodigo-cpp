/*
 * Exercicio 7 - Monitoramento de producao semanal
 * Objetivo: combinar vetor, FOR, calculo de media e busca do maior valor.
 *
 * Le a producao de 7 dias, apresenta os valores, o total, a media
 * e o dia de maior producao (Dia 1 corresponde ao indice 0).
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int producao[7];
    int total = 0;
    int diaMaior = 0;
    float media;

    for (int i = 0; i < 7; i++) {
        cout << "Producao do dia " << i + 1 << ": ";
        cin >> producao[i];
    }

    cout << "\nValores armazenados:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Dia " << i + 1 << ": " << producao[i] << " pecas" << endl;

        total = total + producao[i];

        if (producao[i] > producao[diaMaior]) {
            diaMaior = i;
        }
    }

    media = total / 7.0;

    cout << "\nProducao total da semana: " << total << " pecas" << endl;
    cout << "Media diaria de producao: " << fixed << setprecision(2) << media << " pecas" << endl;
    cout << "Dia de maior producao: Dia " << diaMaior + 1
         << " (" << producao[diaMaior] << " pecas)" << endl;

    return 0;
}
