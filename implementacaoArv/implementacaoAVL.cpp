#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <assert.h>
#include "avl.h"

void liberarMemoria(NO *NO_ptr)
{
  if (NO_ptr == NULL)
    return;

  liberarMemoria(NO_ptr->esquerda);
  liberarMemoria(NO_ptr->direita);

  arv(NO_ptr);
}

void liberar_memoria(arv *arv_ptr)
{
  liberarMemoria(arv_ptr->raiz);
}

arv *init_arv()
{
  arv *arv = NULL;

  if ((arv = malloc(sizeof(arv))) == NULL)
  {
    return NULL;
  }

  arv->raiz = NULL;

  return arv;
}

NO *init_NO(int valor)
{
  NO *NO_ptr;

  NO_ptr = malloc(sizeof(NO));
  if (NO_ptr == NULL)
  {
    puts("o programa ficou sem memória\n");
    system("pause");
  }

  NO_ptr->esquerda = NULL;
  NO_ptr->direita = NULL;
  NO_ptr->valor = valor;

  return NO_ptr;
}

int altura(const NO *const NO_ptr)
{
  int altura_esquerda = 0;
  int altura_direita = 0;

  if (NO_ptr->esquerda)
    altura_esquerda = altura(NO_ptr->esquerda);

  if (NO_ptr->direita)
    altura_direita = altura(NO_ptr->direita);

  return max(altura_direita, altura_esquerda) + 1;
}

int fator_bal(const NO *const NO_ptr)
{
  int fator = 0;

  if (NO_ptr->esquerda)
    fator += altura(NO_ptr->esquerda);

  if (NO_ptr->direita)
    fator -= altura(NO_ptr->direita);

  return fator;
}

NO *rotacionar_esquerda_esquerda(const NO *const NO_ptr)
{
  NO *const temp_ptr = NO_ptr;
  NO *esquerda_ptr = temp_ptr->esquerda;

  temp_ptr->esquerda = esquerda_ptr->direita;
  esquerda_ptr->direita = temp_ptr;

  return esquerda_ptr;
}

NO *rotationarEsquerdaDireita(const NO *const NO_ptr)
{
  NO *const temp_ptr = NO_ptr;
  NO *esquerda_ptr = temp_ptr->esquerda;
  NO *direita_ptr = esquerda_ptr->direita;

  temp_ptr->esquerda = direita_ptr->direita;
  esquerda_ptr->direita = direita_ptr->esquerda;
  direita_ptr->esquerda = esquerda_ptr;
  direita_ptr->direita = temp_ptr;

  return direita_ptr;
}

NO *rotacionar_direita_esquerda(const NO *const NO_ptr)
{
  NO *const temp_ptr = NO_ptr;
  NO *direita_ptr = temp_ptr->direita;
  NO *esquerda_ptr = direita_ptr->esquerda;

  temp_ptr->direita = esquerda_ptr->esquerda;
  direita_ptr->esquerda = esquerda_ptr->direita;
  esquerda_ptr->direita = direita_ptr;
  esquerda_ptr->esquerda = temp_ptr;

  return esquerda_ptr;
}

NO *rotacionar_direita_direita(const NO *const NO_ptr)
{
  NO *const temp_ptr = NO_ptr;
  NO *direita_ptr = temp_ptr->direita;

  temp_ptr->direita = direita_ptr->esquerda;
  direita_ptr->esquerda = temp_ptr;

  return direita_ptr;
}

NO *balancear_NO(NO *const NO_ptr)
{
  NO *NO_balanceado = NULL;

  if (NO_ptr->esquerda)
    NO_ptr->esquerda = balancear_NO(NO_ptr->esquerda);

  if (NO_ptr->direita)
    NO_ptr->direita = balancear_NO(NO_ptr->direita);

  int fator = fator_bal(NO_ptr);

  if (fator >= 2)
  {
    /* pesando pra esquerdauerda */

    if (fator_bal(NO_ptr->esquerda) <= -1)
      NO_balanceado = rotationarEsquerdaDireita(NO_ptr);
    else
      NO_balanceado = rotacionarEsquerdaNO_ptr);
  }
  else if (fator <= -2)
  {
    /* pesando pra direitaeita */

    if (fator_bal(NO_ptr->direita) >= 1)
      NO_balanceado = rotacionarDireitaEsquerda(NO_ptr);
    else
      NO_balanceado = rotacionarDireita(NO_ptr);
  }
  else
  {
    NO_balanceado = NO_ptr;
  }

  return NO_balanceado;
}

void balancearArv(arv *const arv_ptr)
{
  NO *nova_raiz = NULL;

  nova_raiz = balancear_NO(arv_ptr->raiz);

  if (nova_raiz != arv_ptr->raiz)
  {
    arv_ptr->raiz = nova_raiz;
  }
}

void inserir(arv *arv_ptr, int valor)
{
  NO *novo_NO_ptr = NULL;
  NO *next_ptr = NULL;
  NO *last_ptr = NULL;

  if (arv_ptr->raiz == NULL)
  {
    novo_NO_ptr = init_NO(valor);
    arv_ptr->raiz = novo_NO_ptr;
  }
  else
  {
    next_ptr = arv_ptr->raiz;

    while (next_ptr != NULL)
    {
      last_ptr = next_ptr;

      if (valor < next_ptr->valor)
      {
        next_ptr = next_ptr->esquerda;
      }
      else if (valor > next_ptr->valor)
      {
        next_ptr = next_ptr->direita;
      }
      else if (valor == next_ptr->valor)
      {
        return;
      }
    }

    novo_NO_ptr = init_NO(valor);

    if (valor < last_ptr->valor)
      last_ptr->esquerda = novo_NO_ptr;

    if (valor > last_ptr->valor)
      last_ptr->direita = novo_NO_ptr;
  }

  balancearArv(arv_ptr);
}

// retorna NULL se não encontrar. Essa é função para que a árvore é construída: para se buscar valores nela.
NO *encontrar_valor(const arv *const arv, int valor)
{
  NO *atual = arv->raiz;

  while (atual && atual->valor != valor)
  {
    if (valor > atual->valor)
      atual = atual->direita;
    else
      atual = atual->esquerda;
  }

  return atual;
}

void listar(NO *NO_ptr)
{
  if (NO_ptr != NULL)
  {
    printf("No = %d, altura = %d, FATBAL = %d\n", NO_ptr->valor, altura(NO_ptr), fator_bal(NO_ptr));
    listar(NO_ptr->esquerda);
    listar(NO_ptr->direita);
  }
}

int main()
{
  arv *arv_ptr = init_arv();

  int op, valor;
  while (1)
  {
    puts("------------------------------"
         "\n| 0- Sair;"
         "\n| 1- Inserir;"
         "\n| 2- Listar;"
         "\n------------------------------"
         "\n\n| Opcao: ");
    scanf_s("%d", &op);
    switch (op)
    {
    case 0:
      liberar_memoria(arv_ptr);
      system("pause");
      exit(0);
      break;
    case 1:
      puts("\nInforme o valor: ");
      scanf_s("%d", &valor);
      inserir(arv_ptr, valor);
      break;
    case 2:
      if (arv_ptr->raiz == NULL)
      {
        puts("\n| Arvore vazia!\n\n");
      }
      else
      {
        puts("\n");
        listar(arv_ptr->raiz);
        puts("\n\n");
      }
      break;
    }
  }
}