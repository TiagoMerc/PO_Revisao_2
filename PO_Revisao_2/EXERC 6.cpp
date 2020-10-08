#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>
#include <conio.h>

#define Lin 9
#define Col 3

using namespace std;
int main()  
{
	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios\n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 6" << endl;
    cout << "\nDado o grafo representado na imagem a seguir. ";
	cout << "\nFaca um programa que leia um arquivo contendo informacoes do grafo,";
	cout <<"\n gere uma matriz de adjacencia e calcule o grau de cada vertice." << endl;
 
  	cout <<"\nNumero de vertices: " << 6;
	  cout<< "\nNumero de arestas: " << 9 << endl;
cout << "\n";
cout << "\n";
   
    cout << "\t\tConteudo do GRAFO" << endl;
	int i, j, Mat[Lin][Col]; 
  
    FILE *arq;

    arq=fopen("Exercicio6_arquivo.txt", "r");

    for(i=0;i<Lin;i++){
        for(j=0;j<Col;j++){
            fscanf(arq,"%d ", &Mat[i][j]);
            cout << " " << Mat[i][j];
    }
    cout << "\n";
    }
     
    cout << "\n";
    
	cout << "\t\tMATRIZ ADJACENCIA\n\n" << endl;
	int arest = 9, vertice= 6;  
	int  pOri, pDest;
	
	
	  	for(int i = 0; i<vertice; ++i){ //Le a matriz 
				for(j = 0; j<vertice; ++j){
					printf("%3d", Mat[i][j] + Mat[j][i]);
				}
				printf("\n");
   	    }
    
	
	
		
	getch();
 fclose(arq); //fechar arquivo
	return 0;
}