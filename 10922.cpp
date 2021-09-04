#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	string c = a ;
	while (cin >> a)
	{
		if (a == "0")
		{
			break;
		}
		else 
		{
			string sum = 0;
			int tmp = 0;


			for (int i = 0; i < a.size(); ++i)
			{
				a += a[i]-'0';
				if (a % 10 > 1){
					tmp ++; 
				}
				else {
					if (a % 9 == 0){
						printf("%d is a multiple of 9 and has 9-degree %d.",c ,tmp);
					}
					else {
						printf("%d is not a multiple of 9.",c);
					}
				}
			}
			
		}
			
	}

	return 0;
}


