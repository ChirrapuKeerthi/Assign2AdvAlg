#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter matrix dimensions ";
    cin>>m;
    cin>>n;

    int mat[m][n];
    cout<<"Enter matrix elements"<<endl;
    int ele=0;//variable to count non-zero elements

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            if(mat[i][j]!=0)
                ele++;
        }
    }

    //sparse matrix representation using arrays
    int sparse_matrix[3][ele];
    //3 rows to represent row,column,value for non-zero elements and column size of sparse matrix is equal to number of non zero elements.
    
    //conversion
    ele=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=0){
                sparse_matrix[0][ele]=i; //row
                sparse_matrix[1][ele]=j; //column
                sparse_matrix[2][ele]=mat[i][j]; //value
                ele++;
            }
        }
    }

    string names[3]={"row","column","value"};
    //printing output
    for(int i=0;i<3;i++){
        cout<<names[i]<<" ";
        for(int j=0;j<ele;j++){
            cout<<sparse_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}