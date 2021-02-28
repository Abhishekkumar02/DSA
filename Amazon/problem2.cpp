#include <bits/stdc++.h>
using namespace std;
bool hasArrayTwoCandidates(int A[], int arr_size,
						int sum)
{
	int l, r;
	sort(A, A + arr_size);
	l = 0;
	r = arr_size - 1;
	while (l < r) {
		if (A[l] + A[r] == sum){
			cout<<l<<" "<<r<<"\n";
			break;}
		else if (A[l] + A[r] < sum)
			l++;
		else
			r--;
	}
	return 0;
}
int main()
{
	int A[] = { 1, 25, 25, 35, 60};
	int n = 60;
	int arr_size = sizeof(A) / sizeof(A[0]);
	hasArrayTwoCandidates(A, arr_size, n);

	return 0;
}
