#include<iostream>
#include"mycode.h"
using namespace std;


void MATRIX:: populate(){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=i+1*j+1;			
			}		
		}	
	}
void MATRIX:: display(){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				cout<<matrix[i][j]<<"   ";			
			}
			cout<<endl;	
		}	
	}
void MATRIX:: add(MATRIX a, MATRIX b){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=a.matrix[i][j]+b.matrix[i][j];		
			}
		}
	}
void MATRIX:: subtract(MATRIX a, MATRIX b){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=a.matrix[i][j]-b.matrix[i][j];		
			}
		}
	}
void MATRIX:: multiply(MATRIX a,MATRIX b){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=0;
				for(int k=0;k<coln;k++){
					matrix[i][j]+=a.matrix[i][k]*b.matrix[k][j];
				}			
			}		
		}		
	}
