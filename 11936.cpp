#include <bits/stdc++.h>

using namespace std;

int main(){
	int a ;
	while (cin >> a)
	{
		while(a--)
		{
			int x, y, z ;
			cin >> x >> y >> z ;

			if (x + y > z )
				if ( x + z > y)
					if ( y + z > x){
						printf ("OK\n");
						continue;
					}
			printf("Wrong!!\n");
		}
	}
}

