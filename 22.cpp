#include<iostream>
using namespace std;
#define MAX 3

class Matrix{
	private:
		int mat[MAX][MAX];
	public:
	    Matrix();
		void create();
		void display();
		void add(Matrix &mat1 , Matrix &mat2);
        void diff(Matrix &mat1 , Matrix &mat2);	
        void prod(Matrix &mat1 , Matrix &mat2);	
		void transpose(Matrix &m1);		
};

Matrix::Matrix(){
	for(int m=0; m<MAX; m++)
	    for(int n=0; n<MAX; n++)
	        mat[m][n]=0;
}

void Matrix::create(){
	for(int m=0; m<MAX; m++)
	    for(int n=0; n<MAX; n++)
	    cin>>mat[m][n];
}

void Matrix::add(Matrix &mat1 , Matrix &mat2){
	for(int m=0; m<MAX; m++)
	    for(int n=0; n<MAX; n++){
	    	mat[m][n]=mat1.mat[m][n]+mat2.mat[m][n];
		}	
}

void Matrix::diff(Matrix &mat1 , Matrix &mat2){
	for(int m=0; m<MAX; m++)
	    for(int n=0; n<MAX; n++){
	    	mat[m][n]=mat1.mat[m][n]-mat2.mat[m][n];
		}	
}

void Matrix::prod(Matrix &mat1 , Matrix &mat2){
	for(int k=0; k<MAX; k++)
		for(int m=0; m<MAX; m++)
		    for(int n=0; n<MAX; n++){
		    	mat[m][n]=mat1.mat[m][n]-mat2.mat[m][n];
			}	
}

void Matrix::transpose(Matrix &m1){
    for(int m=0; m<MAX; m++)
	    for(int n=0; n<MAX; n++){
	    	mat[m][n]=m1.mat[n][m];
		}	
}
void Matrix::display(){
	for(int m=0; m<MAX; m++){
	    for(int n=0; n<MAX; n++){
	    	cout<<mat[m][n]<<" ";
		}
		cout<<endl;				
	}
}

int main(){
	Matrix mat1,mat2,mat3;
	cout<<"Enter first matrix: "<<endl;
    mat1.create();
    cout<<"Enter second matrix: "<<endl;
    mat2.create();
    mat3.add(mat1,mat2);
    cout<<"Addition of two matrix is: "<<endl;
	mat3.display();
    mat3.diff(mat1,mat2);
    cout<<"difference of two matrix is: "<<endl;
	mat3.display();
    mat3.prod(mat1,mat2);
    cout<<"Product of two matrix is: "<<endl;
	mat3.display();    
    cout<<"Transpose of first matrix is: "<<endl;
    mat3.transpose(mat1);
	mat3.display();
    cout<<"Transpose of second matrix is: "<<endl;
    mat3.transpose(mat2);
	mat3.display();	
			
	return 0;
}
