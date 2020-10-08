#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>
#include <conio.h>

#define Lin 9
#define Col 2
#define max 10

using namespace std;


int a=-1;
void exibir(int v[]){

    a++;
    if (a<max){
        printf("%d ", "\nSoma", v[a]);
        exibir(v);
    }
    getch();
}

int main(){
  
    	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios\n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 8" << endl;
    
	cout <<"\n Usando recursividade, faca um programa que calcule a soma dos valores de um vetor. \n";


    int vet[max];
    int i;
  
  
  
  
    for (i=0;i<max;i++)
        scanf("%d",&vet[i]);

    exibir(vet);
}




  

	