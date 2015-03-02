#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>

using namespace std;
const int row=3;
const int coln=3;

class MATRIX{

	
	public:
	int matrix[row][coln];
	MATRIX(){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=i+1;			
			}		
		}	
	}
	void populate();
	void display();
	void add(MATRIX a, MATRIX b);
	void subtract(MATRIX a, MATRIX b);
	void multiply(MATRIX a,MATRIX b);


};

#endif
