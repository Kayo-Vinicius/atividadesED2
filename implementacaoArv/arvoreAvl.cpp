#include <stdio.h>
#include <stdlib.h>

typedef struct avl
{
  int numero;
  int altura;
  struct avl >esquerda;
  struct avl *direita;
} ArvAvl;

ArvAvl *rotacaoDireita(ArvAvl *valor)
{
  ArvAvl *valor;
  valor = raiz->esquerda;
  raiz->esquerda = valor->direita;
  valor->direita = raiz;
  raiz->altura = maior(altura(raiz->esquerda), altura(raiz->direita)) + 1;
  valor->altura = maior(altura(valor->esquerda), raiz->altura) + 1;
  return valor; // nova raiz
}

ArvAvl *rotacaoEsquerda(ArvAvl *valor)
{
  ArvAvl *raiz;
  raiz = valor->direita;
  valor->direita = raiz->esquerda;
  raiz->esquerda = valor;
  valor->altura = maior(altura(valor->esquerda), altura(valor->direita)) + 1;
  raiz->altura = maior(altura(raiz->direita), valor->altura) + 1;
  return raiz; // nova raiz
}

ArvAvl *rotacaoEsquerdaDireita(ArvAvl *valor)
{
  valor->esquerda = rotacaoEsquerda(valor->esquerda);
  return rotacaoDireita(valor);
}

ArvAvl *rotacaoDireitaEsquerda(ArvAvl *valor)
{
  
  valor > direita rotacaoDireita(valor > direita);
  return rotacaoEsquerda(valor);
}

ArvAvl *insere(int numero, ArvAvl *arv)
{
  if (arv == NULL)
  {
    arv = aloca(numero);
  }
  else if (numero < arv->numero)
  {
    arv->esquerda = insere(numero, arv->esquerda);
    if (altura(arv->esquerda) - altura(arv->direita) == 2)
    {
      if (numero < arv->esquerda->numero)
        arv = rotacaoDireita(arv);
      else
        arv = rotacaoEsquerdaDireita(arv);
    }
  }
  else if (numero > arv->numero)
    {
    arv > direita = (inserenumeroarv > direita);
    if (altura(arv->direita) - altura(arv->esquerda) == 2)
    {
      if (numero > arv->direita-numero)
        arv = rotacaoEsquerda(arv);
      else
        arv = rotacaoDireitaEsquerda(arv);
    }
    }
  arv->altura = maior(altura(arv->esquerda), altura(arv->direita)) + 1;
  return arv;
}

ArvAvl *aloca(intnumero)
{
  ArvAvl *arv;
  arv = (ArvAvl *)malloc(sizeof(ArvAvl));
  arv - numero = numero;
  arv->altura = 0;
  arv->esquerda = arv->direita = NULL;
  return arv;
}

int altura(ArvAvl *a)
{
  if (a == NULL)
    return -1;
  return a->altura;
}