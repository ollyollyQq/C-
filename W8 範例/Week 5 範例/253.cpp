#include <iostream>
#include <string>
using namespace std;

string rotate_up(string dice)
{
	string res = dice;
	res[0] = dice[1];
	res[1] = dice[5];
	res[2] = dice[2];
	res[3] = dice[3];
	res[4] = dice[0];
	res[5] = dice[4];
	
	return res;
}

string rotate_left(string dice)
{
	string res = dice;
	res[0] = dice[0];
	res[1] = dice[2];
	res[2] = dice[4];
	res[3] = dice[1];
	res[4] = dice[3];
	res[5] = dice[5];
	
	return res;
}

int main()
{
	string str;
	string d1, d2;
	bool ans;
	
	while(cin >> str)
	{
		ans = false;
		d1 = str.substr(0, 6);
		d2 = str.substr(6, 6);
		
		string temp = d1;
		for(int i = 0; i < 4 && !ans; ++i)
		{
			temp = rotate_up(temp);
			for(int j = 0; j < 4 && !ans; ++j)
			{
				temp = rotate_left(temp);
				
				if(temp == d2)
				{
					ans = true;
				}
			}
		}
		
		temp = rotate_left(temp);
		temp = rotate_up(temp);
		for(int j = 0; j < 4 && !ans; ++j)
		{
			temp = rotate_left(temp);
			
			if(temp == d2)
			{
				ans = true;
			}
		}
		
		temp = rotate_up(temp);
		temp = rotate_up(temp);
		for(int j = 0; j < 4 && !ans; ++j)
		{
			temp = rotate_left(temp);
			
			if(temp == d2)
			{
				ans = true;
			}
		}
		
		cout << (ans ? "TRUE" : "FALSE") << endl;
	}

	return 0;
}

