#include <bits/stdc++.h>

using namespace std;
int main(){
	int N;
	char T[100];
	cin >> T ;
	int sum = 0;
	int degree = 0;
	for (int i = 0; i < T.lenght(); ++i)
	{
		sum += T[i];
		degree ++;
	}
	if (sum % 10 > 0){
		sum = sum %10 + (sum - (sum%10));
		degree ++ ; 
	}
	else if (sum % 10 < 0 && sum %9 == 0) {
		printf("%d is a multiple of 9 and has 9-degree %d",T,degree);

	}
	return 0;
	}


