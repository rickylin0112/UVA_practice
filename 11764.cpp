#include <bits/stdc++.h>
using namespace std;

int main(){
	int T ; 
	cin >> T ;
	for (int cassss = 1 ; cassss <= T ; cassss++){
		int  N;
		cin >> N ;
		int arr[N+5];
		for (int i = 0; i < N; ++i)
		{
			cin >> arr[i];
		}
		int high = 0;
		int low = 0;
		for (int i = 0; i < N-1; ++i)
		{
			
			if (arr[i]>arr[i+1]){
				low ++ ;

			}
			else if (arr[i] < arr[i+1]){
				high ++;
			}
			else {
				continue;
			}
			
		}
		printf ("Case %d: %d %d\n", cassss , high ,low);


	}
	
}