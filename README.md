# Exercícios sobre Vetores — Pseudocódigo e C++

Repositório com 7 exercícios da **"Lista de Exercícios sobre Vetores em Pseudocódigo e C++"**, da disciplina **Algoritmos e Programação de Computadores (2026/2)**. Desenvolvidos durante meus estudos de Engenharia de Software na UniSenai.

Conforme a proposta da atividade, foram escolhidos **3 exercícios para fazer em pseudocódigo** e **4 exercícios para fazer em C++**.

## Objetivo

Praticar o uso de vetores para armazenar vários valores do mesmo tipo, acessar posições por índice, percorrer dados com estruturas de repetição e tomar decisões com estruturas condicionais.

## Tópicos abordados

- Declaração, preenchimento e leitura de vetores (índices de `0` até `N - 1`)
- Estruturas de repetição — `PARA` no pseudocódigo; `for` e `do while` em C++
- Estruturas condicionais — `SE / SENÃO SE / SENÃO` e `if / else if / else`
- Acumulação (soma e média) e busca do maior e do menor valor
- Contadores para resumir classificações
- Validação de entrada com `do while` (rejeitando valores inválidos)

## Exercícios

### Parte 1 — Pseudocódigo — pasta [`pseudocodigo/`](pseudocodigo/)
| Arquivo | Exercício | Descrição |
|---|---|---|
| [`exercicio01_notas_alunos.txt`](pseudocodigo/exercicio01_notas_alunos.txt) | 1 — Notas de cinco alunos | Lê as 5 notas em um vetor com `PARA` e apresenta o número de cada aluno com sua nota |
| [`exercicio02_temperaturas_maquina.txt`](pseudocodigo/exercicio02_temperaturas_maquina.txt) | 2 — Temperaturas de uma máquina | Armazena 6 temperaturas e classifica cada uma em **normal** (< 40 °C), **atenção** (40 a 60 °C) ou **crítica** (> 60 °C) |
| [`exercicio03_producao_pecas.txt`](pseudocodigo/exercicio03_producao_pecas.txt) | 3 — Produção diária de peças | Lê a produção de 7 dias, calcula o **total** e encontra a **maior produção** em um único dia |

### Parte 3 — Programas em C++ — pasta [`cpp/`](cpp/)
| Arquivo | Exercício | Descrição |
|---|---|---|
| [`exercicio07_producao_semanal.cpp`](cpp/exercicio07_producao_semanal.cpp) | 7 — Monitoramento de produção semanal | Mostra a produção dos 7 dias, o **total**, a **média diária** e o **dia de maior produção** |
| [`exercicio08_situacao_alunos.cpp`](cpp/exercicio08_situacao_alunos.cpp) | 8 — Situação de alunos por nota | Classifica 10 alunos em **Aprovado**, **Recuperação** ou **Reprovado** e conta quantos ficaram em cada situação |
| [`exercicio09_sensores_temperatura.cpp`](cpp/exercicio09_sensores_temperatura.cpp) | 9 — Sensores de temperatura | Valida as 8 leituras com `do while` (-20 °C a 150 °C), classifica cada uma, conta por classificação e mostra a **maior temperatura** |
| [`exercicio10_tempo_chamados.cpp`](cpp/exercicio10_tempo_chamados.cpp) | 10 — Tempo de resposta de chamados | Valida 12 tempos (sem negativos), calcula a **média**, classifica em **Rápido / Adequado / Demorado** e mostra o **menor** e o **maior** tempo |

## Exemplos de execução

**Exercício 7 — Monitoramento de produção semanal**
```
Valores armazenados:
Dia 1: 120 pecas
Dia 2: 95 pecas
Dia 3: 140 pecas
Dia 4: 110 pecas
Dia 5: 130 pecas
Dia 6: 80 pecas
Dia 7: 100 pecas

Producao total da semana: 775 pecas
Media diaria de producao: 110.71 pecas
Dia de maior producao: Dia 3 (140 pecas)
```

**Exercício 8 — Situação de alunos por nota**
```
Situacao dos alunos:
Aluno 1 (nota 8.5): Aprovado
Aluno 2 (nota 6): Recuperacao
Aluno 3 (nota 3.5): Reprovado
...
Resumo da turma:
Aprovados: 4
Recuperacao: 4
Reprovados: 2
```

**Exercício 9 — Sensores de temperatura** (com validação de valores inválidos)
```
Temperatura do sensor 1 (C): 25
Temperatura do sensor 2 (C): 200
Valor invalido! Digite entre -20 e 150.
Temperatura do sensor 2 (C): 45
...
Classificacao das leituras:
Sensor 1 (25 C): Normal
Sensor 2 (45 C): Atencao
Sensor 3 (60 C): Atencao
Sensor 4 (61 C): Critica
...
Resumo:
Normal: 3
Atencao: 3
Critica: 2
Maior temperatura: 90 C
```

**Exercício 10 — Tempo de resposta de chamados**
```
Tempo de resposta do chamado 1 (min): 10
Tempo de resposta do chamado 2 (min): -5
Valor invalido! O tempo nao pode ser negativo.
...
Resumo:
Tempo medio de resposta: 23.08 min
Rapidos: 5
Adequados: 4
Demorados: 3
Menor tempo: 5 min
Maior tempo: 60 min
```

## Como executar

Os arquivos de pseudocódigo (`.txt`) são para leitura. Os programas em C++ podem ser executados:

**Pelo terminal**, com o G++:

```bash
g++ cpp/exercicio07_producao_semanal.cpp -o exercicio07
./exercicio07
```

**Pelo VS Code**, abra a pasta do projeto, abra o arquivo `.cpp` desejado e pressione `Ctrl + Shift + B`. A tarefa configurada em `.vscode/tasks.json` compila e executa o programa no terminal.

## Estrutura do projeto

```
├── pseudocodigo/           # Parte 1 — exercícios em pseudocódigo
│   ├── exercicio01_notas_alunos.txt
│   ├── exercicio02_temperaturas_maquina.txt
│   └── exercicio03_producao_pecas.txt
├── cpp/                    # Parte 3 — programas em C++
│   ├── exercicio07_producao_semanal.cpp
│   ├── exercicio08_situacao_alunos.cpp
│   ├── exercicio09_sensores_temperatura.cpp
│   └── exercicio10_tempo_chamados.cpp
└── .vscode/                # Configuração para compilar e executar no VS Code
```

## Tecnologias

- Pseudocódigo (padrão utilizado em aula)
- Linguagem C++
- Compilador G++ (MSYS2 UCRT64)
- Visual Studio Code

## Autor

**Willian Kraft**
Estudante de Engenharia de Software | UniSenai
[LinkedIn](https://www.linkedin.com/in/willian-kraft-7107b7266)
