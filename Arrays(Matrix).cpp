#include <iostream>
#include <string>
using namespace std;

int main() {
//Arrays in cpp are Constant(Faster)
//We are allow to put just Unique datatypes
int a[3]={34,32};
cout<<a<<endl;
cout<<a[0]<<endl;
cout<<a[2]<<endl;
cout<<a[3]<<endl;


//What's a Matrix in coding? (built in, custom(2D arr), Matlab)
int matrix[3][3] = {{1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9}};
                    
                    
                    
                                      
//SUM
int matrixA[2][2] = {{1, 2}, 
                     {3, 4}};
                     
int matrixB[2][2] = {{5, 6},
                     {7, 8}};
int resultS[2][2]={0}; 
int resultM[2][2]={0}; 

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        resultS[i][j] = matrixA[i][j] + matrixB[i][j];
    }
}
 cout << "Result S matrix C (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
           cout << resultS[i][j] << " ";
        }
        cout << endl;
	}
	//what matrixes are dotable? A mxn . B nxp
	//Multiplication

	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                resultM[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
        
    }
	cout << "Result M matrix C (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultM[i][j] << " ";
        }
        cout << endl;
	}
}
