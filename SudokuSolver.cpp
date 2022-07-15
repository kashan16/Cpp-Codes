#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9

class Sudoku
{
	public:
		bool isSafe(int row , int col , int board[N][N] , int val)
		{
			for(int i = 0 ; i < 9 ; i++)
			{
				if(board[row][i] == val)
				{
					return false;
				}
				if(board[i][col] == val)
				{
					return false;
				}
				if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val)
				{
					return false;
				}
			}
			return true;
		}
		bool solve(int board[N][N])
		{
			for(int i = 0 ; i < 9 ; i++)
			{
				for(int j = 0 ; j < 9 ; j++)
				{
					if(board[i][j] == 0)
					{
						for(int val = 0 ; val <= 9 ; val++)
						{
							if(isSafe(i,j,board,val))
							{
								board[i][j] = val;
								bool next = solve(board);
								if(next)
								return true;
								else
								{
									board[i][j] = 0;
								}
							}
						}
						return false;
					}
				}
			}
			return true;
		}	
		bool SolveSudoku(int grid[N][N])
		{
			solve(grid);
		}
		void printGrid(int grid[N][N])
		{
			for(int i = 0 ; i < 9 ; i++)
			{
				for(int j = 0 ; j < 9 ; j++)
				{
					cout<<grid[i][j]<<" ";
				}
				cout<<endl;
			}
		}		
};

int main()
{
	int t; 
	cin>>t;
	int grid[N][N];
	while(t--)
	{
		for(int i = 0 ; i < 9 ; i++)
		{
			for(int j = 0 ; j < 9 ; j++)
			{
				cin>>grid[i][j];
			}
		}
	}
	Sudoku s;
	if(s.SolveSudoku(grid) == true)
	s.printGrid(grid);
	else
	cout<<"NO EXIST!!";
	cout<<endl;
	return 0;
}
