#include <iostream>
using namespace std;
struct NoArvore{
	int data;
	NoArvore *esquerda;
	NoArvore *direita;
};

void preOrdem (NoArvore *raiz){
	if(raiz != NULL){
		cout << raiz -> data << " ";
		preOrdem(raiz -> esquerda);
		preOrdem(raiz -> direita);
	}
}
int main(int argc, char** argv) {
	
	NoArvore *raiz = new NoArvore;
    raiz -> data = 2;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;
        
    NoArvore *elementoEsquerda = new NoArvore;
    elementoEsquerda -> data = 7;
    elementoEsquerda -> esquerda = NULL;
    elementoEsquerda -> direita = NULL;
    
    raiz->esquerda = elementoEsquerda;

    NoArvore *elementoEsquerda2 = new NoArvore;
    elementoEsquerda2 -> data = 2;
    elementoEsquerda2 -> esquerda = NULL;
    elementoEsquerda2 -> direita = NULL;
    
    elementoEsquerda -> esquerda = elementoEsquerda2;

    NoArvore *elementoDireita = new NoArvore;
    elementoDireita -> data = 6 ;
    elementoDireita -> esquerda = NULL;
    elementoDireita -> direita = NULL;
    
    elementoEsquerda -> direita = elementoDireita;
    
    NoArvore *elementoEsquerda3 = new NoArvore;
    elementoEsquerda3 -> data = 5;
    elementoEsquerda3 -> esquerda = NULL;
    elementoEsquerda3-> direita = NULL;
    
    elementoDireita -> esquerda = elementoEsquerda3;
    
    NoArvore *elementoDireita2 = new NoArvore;
    elementoDireita2 -> data = 11;
    elementoDireita2-> esquerda = NULL;
    elementoDireita2-> direita = NULL;
    
    elementoDireita -> direita = elementoDireita2;
    
    preOrdem(raiz);

	return 0;
}
