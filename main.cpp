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

void elementoPar(NoArvore *raiz){
	if(raiz != NULL){
		if(raiz -> data % 2 == 0){
		cout << raiz -> data << " ";
		}
		elementoPar(raiz -> esquerda);
		elementoPar(raiz -> direita);
		
			
	}
}

int qntdNos(NoArvore *raiz){
	int tamanho = 1;
	if(raiz == NULL){
		return 0;
	}
	
	tamanho += qntdNos(raiz -> esquerda);
	tamanho += qntdNos(raiz -> direita);
	return tamanho;
	
}

int SomaDosNos(NoArvore *raiz){
	int soma;
	if(raiz == NULL){
		return 0;
	}
	
	soma = raiz->data + SomaDosNos(raiz->esquerda) + SomaDosNos(raiz->direita);
    return soma;
	
}

double mediaDosNos(NoArvore *raiz){
	
	if(raiz == NULL){
		return 0;
	}
	
	double soma = SomaDosNos(raiz); 
	double numeroNos = qntdNos(raiz); 
	double media = (soma) / numeroNos;
	
	return media;
	
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
    
    NoArvore *elementoDireita3 = new NoArvore;
    elementoDireita3 -> data = 5;
    elementoDireita3-> esquerda = NULL;
    elementoDireita3-> direita = NULL;
    
    raiz->direita = elementoDireita3;
    
    NoArvore *elementoDireita4 = new NoArvore;
    elementoDireita4 -> data = 9;
    elementoDireita4-> esquerda = NULL;
    elementoDireita4-> direita = NULL;
    
    elementoDireita3 -> direita = elementoDireita4;
    
    NoArvore *elementoDireita5 = new NoArvore;
    elementoDireita5 -> data = 4;
    elementoDireita5-> esquerda = NULL;
    elementoDireita5-> direita = NULL;
    
    elementoDireita4 -> direita = elementoDireita5;

    
    preOrdem(raiz);
    
    cout << endl;
    
    elementoPar(raiz);

    cout << endl;
    
    int tamanhoArvore = qntdNos(raiz);
	cout << "Quantidade de Nos da arvore: " << tamanhoArvore << endl;
	
	cout << endl;
	
	int somaDosValores = SomaDosNos(raiz);
    cout << "Soma dos Nos da arvore: " << somaDosValores << endl;
    
    cout << endl;
    
    cout << "Media dos Nos da arvore: " << mediaDosNos(raiz) << endl;
	

	return 0;
}
