#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	while (cin >> a)
	{
		if (a == "0")
		{
			break;
		}
		else 
		{
			int N = 0;
			int degree =0;
			string tmp = a;
			while(true)
			{
				N = 0;
				for (int i = 0; i < tmp.size(); ++i)
				{	
					N += (int)(tmp[i] -'0');
				}
				if(N % 9 != 0)
				{
					break;
				}
				else
				{	
					degree ++;
					if (N == 9){
						break; 
					}
				}
				tmp = to_string(N);

			}

			if (degree == 0){
				cout << a << " is not a multiple of 9.\n";
			}
			else 
			{
				cout << a << " is a multiple of 9 and has 9-degree " << degree << ".\n";
			}














			// 123
			// 12
			// 1
			// 0
			// total ="321"
			// while(N){
			// 	total+=char((N%10)+'0');
			// 	N/=10;
			// }

			// for (int i = 0; i < total.length()/2; ++i)
			// {
			// 	// char tmp = total[i];
			// 	// total[i] =  total[total.length()-1-i];
			// 	// total[total.length()-1-i] = tmp;
			// 	swap(total[i] , total[total.length()-1-i]);
			// }

			// reverse(total.begin(), total.end());

			// N = stoi(total);
			
		}
			
}	

	return 0;
}


