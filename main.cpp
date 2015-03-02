#include<iostream>
#include"mycode.h"

int main(){
		
	MATRIX a,b,c;
	cout<<"Matrix 1"<<endl;
	a.display();
	cout<<"Matrix 2"<<endl;
	b.display();
	cout<<"Addition"<<endl;
	c.add(a,b);
	c.display();
	cout<<endl;
	cout<<"Subtraction"<<endl;
	c.populate();
	c.subtract(a,b);
	c.display();
	cout<<endl;
	cout<<"Multiplication"<<endl;
	c.populate();
	c.multiply(a,b);
	c.display();
	return 0;
}
