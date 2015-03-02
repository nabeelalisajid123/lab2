#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"

TEST(AddTest2, Blah) {
 	MATRIX a,b,c;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a.matrix[i][j]=i+1;
			b.matrix[i][j]=i+1;		
		}	
	}
	c.add(a,b);
	
	EXPECT_EQ(c.matrix[0][0],2);
	EXPECT_EQ(c.matrix[0][1],2);
	EXPECT_EQ(c.matrix[0][2],2);
	EXPECT_EQ(c.matrix[1][0],4);
	EXPECT_EQ(c.matrix[1][1],4);
	EXPECT_EQ(c.matrix[1][2],4);
	EXPECT_EQ(c.matrix[2][0],6);
	EXPECT_EQ(c.matrix[2][1],6);
	EXPECT_EQ(c.matrix[2][2],6);
	
}
TEST(SUBTest2, Blaash) {
 	MATRIX a,b,c;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a.matrix[i][j]=i+1;
			b.matrix[i][j]=i+1;		
		}	
	}
	c.subtract(a,b);
	
	EXPECT_EQ(c.matrix[0][0],0);
	EXPECT_EQ(c.matrix[0][1],0);
	EXPECT_EQ(c.matrix[0][2],0);
	EXPECT_EQ(c.matrix[1][0],0);
	EXPECT_EQ(c.matrix[1][1],0);
	EXPECT_EQ(c.matrix[1][2],0);
	EXPECT_EQ(c.matrix[2][0],0);
	EXPECT_EQ(c.matrix[2][1],0);
	EXPECT_EQ(c.matrix[2][2],0);
	
}
TEST(MULTest2, Blaash) {
 	MATRIX a,b,c;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a.matrix[i][j]=i+1;
			b.matrix[i][j]=i+1;		
		}	
	}
	c.multiply(a,b);
	
	EXPECT_EQ(c.matrix[0][0],6);
	EXPECT_EQ(c.matrix[0][1],6);
	EXPECT_EQ(c.matrix[0][2],6);
	EXPECT_EQ(c.matrix[1][0],12);
	EXPECT_EQ(c.matrix[1][1],12);
	EXPECT_EQ(c.matrix[1][2],12);
	EXPECT_EQ(c.matrix[2][0],18);
	EXPECT_EQ(c.matrix[2][1],18);
	EXPECT_EQ(c.matrix[2][2],18);
	
}


