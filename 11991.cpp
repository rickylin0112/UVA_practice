#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ,m;
	cin >> n >> m;
	string arr;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		while (cin >> a >>b)
			{
				int tmp = 0 ;
				while (n)
				{

					if (b != (int)arr[i]-'0'){
						tmp ++;
					}
					else if(b == (int)arr[i]- '0')
					{
						tmp ++;
						if  (b = tmp)
						{
							break;
						}
						else 
						{
							tmp ++;
						}
					}
					cout << tmp << "\n";
				}
				
			}

	}
}






// int n ,m;
// 	string arr;
// 	string com;
// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> arr[i];
// 	}
// 	for (int i = 0; i < arr.size(); ++i)
// 	{
// 		arr = arr[i] - '0';
// 	}
// 	while (m)
// 	{
// 		int count = 0;
// 		int tmp = 0;
// 		int math = 0;
// 		int cor = 0;
// 		for (int i = 0; i < 1; ++i)
// 		{
// 			cin >> com[i];
// 		}
// 		tmp = com[1] - '0';
// 		math = com[2] - '0';
// 		for (int i = 0; i < n; ++i)
// 		{
// 			if (math == (arr[i]-'0'))
// 			{
// 				count++;
// 				cor = i;
// 				if (count == tmp)
// 				{
// 					break;
// 				}
// 				else {
// 					cout << "0\n";
// 				}
// 			}
// 			cout << cor << "\n";
// 		}

// 	}