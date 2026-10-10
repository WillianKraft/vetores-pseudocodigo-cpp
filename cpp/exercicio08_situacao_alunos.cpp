/*
 * Exercicio 8 - Situacao de alunos por nota
 * Objetivo: aplicar vetor, repeticao e classificacao com IF, ELSE IF e ELSE.
 *
 *   nota >= 7,0          -> Aprovado
 *   nota >= 4,0 e < 7,0  -> Recuperacao
 *   nota < 4,0           -> Reprovado
 */
#include <iostream>

using namespace std;

int main() {

    float notas[10];
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Nota final do aluno " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << "\nSituacao dos alunos:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Aluno " << i + 1 << " (nota " << notas[i] << "): ";

        if (notas[i] >= 7.0) {
            cout << "Aprovado" << endl;
            aprovados++;
        }
        else if (notas[i] >= 4.0) {
            cout << "Recuperacao" << endl;
            recuperacao++;
        }
        else {
            cout << "Reprovado" << endl;
            reprovados++;
        }
    }

    cout << "\nResumo da turma:" << endl;
    cout << "Aprovados: " << aprovados << endl;
    cout << "Recuperacao: " << recuperacao << endl;
    cout << "Reprovados: " << reprovados << endl;

    return 0;
}
