#include <stdio.h>
#include <stdlib.h>

// Definindo uma estrutura para um nó na lista
typedef struct Node {
    int preenchimento;  // Valor do nó
    struct Node* anterior;  // Ponteiro para o nó anterior
} Node;

// Definindo uma estrutura para os investimentos que contêm os nós
typedef struct Investimentos {
    Node* pontos;  // Ponteiro para o primeiro nó na lista
} Investimentos;

// Inicializa a lista, definindo o ponteiro de nós como NULL
void inicializarLista(Investimentos* lista) {
    lista->pontos = NULL;
}

// Inicializa um novo nó com um valor especificado e o insere na lista
void inicializar(Investimentos* lista, int valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));  // Aloca memória para um novo nó
    novoNo->preenchimento = valor;  // Define o valor do nó
    novoNo->anterior = lista->pontos;  // O novo nó aponta para o primeiro nó anterior
    lista->pontos = novoNo;  // Atualiza o primeiro nó na lista
}

// Imprime os valores dos nós na lista
void imprimir(Investimentos* lista) {
    Node* atual = lista->pontos;  // Começa pelo primeiro nó na lista
    while (atual != NULL) {  // Continua enquanto houver nós para percorrer
        printf("%d ", atual->preenchimento);  // Imprime o valor do nó
        atual = atual->anterior;  // Move para o nó anterior
    }
    printf("\n");  // Pula uma linha no final
}

int main() {
    Investimentos lista;  // Cria uma instância da estrutura Investimentos
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

