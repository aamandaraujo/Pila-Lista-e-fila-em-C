#include <stdio.h>
#include <stdlib.h>

// Definindo uma estrutura para um n� na lista
typedef struct Node {
    int preenchimento;  // Valor do n�
    struct Node* anterior;  // Ponteiro para o n� anterior
} Node;

// Definindo uma estrutura para os investimentos que cont�m os n�s
typedef struct Investimentos {
    Node* pontos;  // Ponteiro para o primeiro n� na lista
} Investimentos;

// Inicializa a lista, definindo o ponteiro de n�s como NULL
void inicializarLista(Investimentos* lista) {
    lista->pontos = NULL;
}

// Inicializa um novo n� com um valor especificado e o insere na lista
void inicializar(Investimentos* lista, int valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));  // Aloca mem�ria para um novo n�
    novoNo->preenchimento = valor;  // Define o valor do n�
    novoNo->anterior = lista->pontos;  // O novo n� aponta para o primeiro n� anterior
    lista->pontos = novoNo;  // Atualiza o primeiro n� na lista
}

// Imprime os valores dos n�s na lista
void imprimir(Investimentos* lista) {
    Node* atual = lista->pontos;  // Come�a pelo primeiro n� na lista
    while (atual != NULL) {  // Continua enquanto houver n�s para percorrer
        printf("%d ", atual->preenchimento);  // Imprime o valor do n�
        atual = atual->anterior;  // Move para o n� anterior
    }
    printf("\n");  // Pula uma linha no final
}

int main() {
    Investimentos lista;  // Cria uma inst�ncia da estrutura Investimentos
    inicializarLista(&lista);  // Inicializa a lista

    inicializar(&lista, 22);  // Insere o valor 22 na lista
    inicializar(&lista, 18);  // Insere o valor 18 na lista
    inicializar(&lista, 8855);  // Insere o valor 8855 na lista
    inicializar(&lista, 44715); // Insere o valor 44715 na lista
    inicializar(&lista, 8855);  // Insere o valor 8855 na lista
    inicializar(&lista, 744);   // Insere o valor 744 na lista
    inicializar(&lista, 55);    // Insere o valor 55 na lista
    inicializar(&lista, 666);   // Insere o valor 666 na lista
    inicializar(&lista, 4414);  // Insere o valor 4414 na lista
    inicializar(&lista, 555);   // Insere o valor 555 na lista

    imprimir(&lista);  // Imprime os valores da lista em ordem inversa

    return 0;
}

