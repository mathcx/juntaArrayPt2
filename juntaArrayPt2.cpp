#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

	using namespace std; 

	class valores{
	
	int i, j, k=0;
	int arrayA[6], arrayB[6], arrayC[12], *arrayD;
	bool rept;
	
	public:
			
	junta(int *arrayD);
	
	};
	
	int valores::junta(int *arrayD){
	
	arrayD = (int *) malloc(sizeof(int));
	
	// Entrada do primeiro array
	for (i=0;i<6;i++){
	cout << "Digite o primeiro array: " << i << endl;
		cin >> arrayA[i];
	}
	
	// Entrada do segundo array
	for (i=0;i<6;i++){
	cout << "Digite o segundo array: " << i << endl;
	cin >> arrayB[i];}
	
	// Preenchendo o arrayC com o arrayA
    for (i=0; i<6; i++){
    arrayC[i] = arrayA[i];}
    
    // Preenchendo o arrayC com o arrayB
    for (i=6; i<12; i++){
    arrayC[i] = arrayB[i-6];}
	
	// Encontrar os valores repetidos no arrayC
	for (i=0; i<12; i++){
		rept = false;
		for (j=0; j<i;j++){
			if(arrayC[i] == arrayC[j]){
				rept = true;
				break;
			}

		}
	
	// Criar um array dinamico sem os valores repetidos do arrayC
	if(!rept){
	arrayD[k] = arrayC[i];
	k++;}
	
	}

	// Printar o array dinamico
	for(i=0; i<k; i++){
	cout << arrayD[i] << " ";}
	
	}

	int main(){
		
		int *arrayD;
		
		arrayD = (int *) malloc(sizeof(int));
		
		valores posicao;
		posicao.junta(arrayD);
		
	}

