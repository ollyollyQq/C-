#include <iostream>
using namespace std;

int main()
{
	int board[64][64];
	int x, y;
	char d;
	string str;
	int m, n;
	bool lost;
	
	cin >> m >> n;
	for(int i = 0; i < 64; ++i)
	{
		for(int j = 0; j < 64; ++j)
		{
			if(i == 0 || j == 0 || i == m + 2 || j == n + 2)
			{
				board[i][j] = 0;
			}
			else
			{
				board[i][j] = 1;
			}
		}
	}
	
	while(cin >> x >> y >> d >> str)
	{
		x += 1;
		y += 1;
		lost = false;
		
		for(int i = 0; i < str.length() && !lost; ++i)
		{
			if(str[i] == 'L')
			{
				switch(d)
				{
					case 'W': d = 'S'; break;
					case 'N': d = 'W'; break;
					case 'E': d = 'N'; break;
					case 'S': d = 'E'; break;
				}
			}
			else if(str[i] == 'R')
			{
				switch(d)
				{
					case 'W': d = 'N'; break;
					case 'N': d = 'E'; break;
					case 'E': d = 'S'; break;
					case 'S': d = 'W'; break;
				}
			}
			else if(str[i] == 'F')
			{
				int nx, ny;
				
				switch(d)
				{
					case 'W': 
						nx = x - 1;
						ny = y;
						break;
					case 'N':
						nx = x;
						ny = y + 1;
						break;
					case 'E':
						nx = x + 1;
						ny = y;
						break;
					case 'S':
						nx = x;
						ny = y - 1;
						break;
				}
				
				if(board[x][y] != 2 && board[nx][ny] == 0)
				{
					lost = true;
					board[x][y] = 2;
				}
				else if(board[nx][ny] > 0)
				{
					x = nx;
					y = ny;
				}
			}
		}
		
		cout << x - 1 << " " << y - 1 << " " << d;
		if(lost)
		{
			cout << " LOST";
		}
		cout << endl;
	}

	return 0;
}

