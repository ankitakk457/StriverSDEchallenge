#include <bits/stdc++.h>
void change(vector<vector<int>> &matrix,vector<vector<int>> &sol,int row,int col,int i,int j)
{
   //up
    for(int p=j;p>=0;p--){
		sol[i][p]=0;
	}

   //down
    for(int p=j;p<col;p++){
		sol[i][p]=0;
	}

   //right
    for(int p=i;p>=0;p--){
		sol[p][j]=0;
	}

   //left
   for(int p=i;p<row;p++){
		sol[p][j]=0;
	}
}

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int row = matrix.size();
	int col = matrix[0].size();
	vector<vector<int>> sol = matrix;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(matrix[i][j]==0){
                change(matrix,sol,row,col,i,j);
			}
		}
	}
	matrix=sol;
	



}
