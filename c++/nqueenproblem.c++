#include<iostream>
#include<vector>
using namespace std;
int issafe(int row  , int column , vector<vector<int>> &board , int size){
    //check column
    int i , j ,k;
    for(i = 0 ; i<row;i++){
        if(board[i][column]!= 0){
            return 0;
        }
    }
    //check left diagonal upwards
    int temp1 = row-1;
    for( i = column-1 ; i>=0 && temp1>=0 ; i--, temp1--){
        if(board[temp1][i]!=0)
        return 0;
    }
    // check left diagonal downwards
    for ( i = row-1, j = column+1; j < size && 
         i >= 0; i--, j++){
        if (board[i][j])
            return 0;

    
}
    
    return 1;
    
}
int placequeens(int row , vector<vector<int>> &mat , int size){//check for indentaion error
    if(row==size)// meaning it is 4th row at which we are and no more queens can be placed
    {
        return 1;
    }
    
        for(int i = 0 ;i<size; i++){
            if(issafe(row , i , mat , size)){
                mat[row][i] = 1;
                if(placequeens(row+1 , mat , size)){
                    return 1;}
                      mat[row][i]=0;
                
                
            }
        
    }
    return 0;
    
}
vector<int> nqueen(int n){
    vector<vector<int>> board( n , vector<int>(n , 0));
    vector<int> answer;
    if(placequeens(0 , board , n)){
        for(int i = 0;i<n;i++){
            for(int j = 0 ;j<n;j++){
                if(board[i][j]){
                    answer.push_back(j+1);
                }
            }
        }
        return answer;
    }
    else{
        return {-1};
    }
}
int main(){
    int n = 8;
    vector<int> final = nqueen(n);
    for(auto i : final){
     cout<<i<<" ";
}
    return 0;
}