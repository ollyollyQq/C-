#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, p1, p2;
vector< vector<int> > block;
vector<int> block_pos;
string cmd1, cmd2;

void init()
{
	block.clear();
	block_pos.clear();
	for(int i = 0; i < n; ++i)
	{
		block.push_back(vector<int>());
		block[i].push_back(i);
		block_pos.push_back(i);
	}
}

void out()
{
	for(int i = 0; i < n; ++i)
	{
		cout << i << ":";
		for(int j = 0; j < block[i].size(); ++j)
		{
			cout << " " << block[i][j];
		}
		cout << endl;
	}
}

void put_back(int num)
{
	int a = block_pos[num], b, c;
	for(int i = 0; i < block[a].size(); ++i)
	{
		if(block[a][i] == num)
		{
			b = i + 1;
			break;
		}
	}
	
	while(b < block[a].size())
	{
		c = block[a][b];
		block[c].push_back(c);
		block[a].erase(block[a].begin() + b);
		block_pos[c] = c;
	}
}

void stack_on(int f, int t)
{
	int fa = block_pos[f], fb;
	int ta = block_pos[t];
	int c;
	
	for(int i = 0; i < block[fa].size(); ++i)
	{
		if(block[fa][i] == f)
		{
			fb = i;
			break;
		}
	}
	
	while(fb < block[fa].size())
	{
		c = block[fa][fb];
		block[ta].push_back(c);
		block[fa].erase(block[fa].begin() + fb);
		block_pos[c] = ta;
	}
}

int main()
{
	while(cin >> n)
	{
		init();
		
		while(cin >> cmd1)
		{
			if(cmd1 == "quit")
			{
				out();
				break;
			}
			else
			{
				cin >> p1 >> cmd2 >> p2;
				
				if(p1 == p2 || block_pos[p1] == block_pos[p2])
				{
				}
				else if(cmd1 == "move" && cmd2 == "onto")
				{					
					put_back(p1);
					put_back(p2);
					stack_on(p1, p2);
				}
				else if(cmd1 == "move" && cmd2 == "over")
				{					
					put_back(p1);
					stack_on(p1, p2);
				}
				else if(cmd1 == "pile" && cmd2 == "onto")
				{					
					put_back(p2);
					stack_on(p1, p2);
				}
				else if(cmd1 == "pile" && cmd2 == "over")
				{					
					stack_on(p1, p2);
				}
			}
		}
	}
} 
