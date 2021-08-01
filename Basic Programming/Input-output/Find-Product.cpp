#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int N, i, product = 1;
	cin >> N;
	long long int A[N];
	for (i = 1; i <= N; i++)
		cin >> A[i];
	for (i = 1; i <= N; i++)
		product = product * A[i] % 1000000007;
 
	cout << product << endl;
	return 0;
}