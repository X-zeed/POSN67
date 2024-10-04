#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,posx=0,posy=0,maxnum = 0;
	bool fail=false;
	cin >> n;
	int table[n][n];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> table[i][j];
		}
	}
	for(int i = 0 ; i < n*n - 1; i++)
	{
//		cout << "TURN : " << i << endl;
		int curren = maxnum,currx = 0 , curry = 0;
		for(int j = 0 ; j < 9 ; j++)
		{
			int xnow = posx - 1 + (j/3);
			int ynow = posy - 1 + (j%3);
			int checknum = table[ynow][xnow];
			// check lowest number possible
			if(xnow >= 0 && xnow < n && ynow >= 0 && ynow < n)
			{
				if(checknum > maxnum)
				{
					if( curren == maxnum || checknum < curren)
					{
//						cout << "Select : " << checknum << endl;
						curren = checknum;
						currx = xnow;
						curry = ynow;
					}
				}
			}
		}
		// check movable
		if(curren > maxnum)
		{
//			cout << "move " << curren << endl;
			posx = currx;
			posy = curry;
			maxnum = curren;
		}
		else
		{
			fail = true;
			break;
		}
	}
	if(fail == true)
		cout << "impossible! ";
	else
		cout << "possible! ";
	cout << posy << "," << posx;
}