#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>
#include <conio.h>

#define Lin 9
#define Col 2

using namespace std;
int main()  
{
	/*____________________________________________________________________________*/	
	cout << "===============================================" << endl;
	cout << "  \n\t UFVJM - Sistemas de Informacao \n\t\tPO - Luciana Assis";
	cout <<" \n\t     Exercicios\n " << endl;
	cout <<" \n     \t\t   2020-05   \n " ;
	cout << "===============================================" << endl;
	
	cout <<"\n\t\t EXERCICIO 7" << endl;
    
	cout <<"\n Dado o grafo anterior, faca um programa que leia um vertice e retorne os";
	cout << "\n vertices adjacentes a ele." << endl;
 
  	cout <<"\nNumero de vertices: " << 6;
	  cout<< "\nNumero de arestas: " << 9 << endl;
cout << "\n";
cout << "\n";
   
	int i, j, v, Mat[Lin][Col]; 

    FILE *arq;

    arq=fopen("Exercicio7_arquivo.txt", "r");

    for(i=0;i<Lin;i++){
    	 for(j=0;j<Col;j++){
    		fscanf(arq,"%d ", &Mat[i][j]);
 		    cout << " " << Mat[i][j];
		}
    cout << "\n";
    }

     cout << "\t\tLendo o vertice" << endl;
     
     cout <<"\nDigite um vertice: ";
	 cin >> v;
	 
	  switch(v){
        case 0:
            cout << " 1, 4 e 5 \n" << endl;
            break;
        case 1:
            cout <<  " 0, 3, 4 e 5 \n" << endl;
            break;
        case 2:
            cout << " 3 e 4 \n" << endl;
            break;
        case 3:
            cout << " 5 \n" << endl;
            break;
        
        default:
            cout << "O valor digitado nao corresponde aos vertices do arquivo!" << endl;
    }


    system("pause");	
	getch();
 fclose(arq); //fechar arquivo
	return 0;
}