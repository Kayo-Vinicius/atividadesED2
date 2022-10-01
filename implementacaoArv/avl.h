#pragma once

struct no
{
  struct no *esquerda;
  struct no *direita;
  int valor;
};

typedef struct no NO;

struct arv
{
  struct no *raiz;
};

typedef struct arv avrAvl;

void liberarMemoriaImpl(NO *NO_ptr);

void liberarMemoria(avrAvl *avrAvl_ptr);

avrAvl *init_avrAvl();

NO *inicioNo(int valor);

int altura(const NO *const NO_ptr);

int fatorBalanceamento(const NO *const NO_ptr);

NO *rotacionarEsquerda(const NO *const NO_ptr);

NO *rotationarEsquerdaDireita(const NO *const NO_ptr);

NO *rotacionarDireitaEsquerda(const NO *const NO_ptr);

NO *rotacionarDireita(const NO *const NO_ptr);

NO *balancear_NO(NO *const NO_ptr);

void balancearAvrAvl(avrAvl *const avrAvl_ptr);

void inserir(avrAvl *avrAvl_ptr, int valor);

NO *encontrarValor(const avrAvl *const avrAvl, int valor);

void avlTraverseNoDfs(NO *NO, int depth);

void avlTraverseDfs(avrAvl *avrAvl);