//Q: sort an array according to another array
//In this case, sort an character array acc to integer array
//IN: a[]= {3, 1, 2}; b[]= {'G', 'E', 'K'}     OUT: {'E','K','G'}


#include<bits/stdc++.h>
using namespace std;
int main() {

	//we'll make an array of pairs
	int n;
	cin >> n;
	int a[n];
	char b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	pair<int, char> pa[n];
	for (int i = 0; i < n; i++) {
		pa[i] = {a[i], b[i]};   //this is how to take user defined input for an array of pairs.
	}
	sort(pa, pa + n);
	for (int i = 0; i < 3; i++)
		cout << pa[i].second << " ";


	//Below program works perfectly as well. We just dont take user input in this case and declare and initialise our own array of pairs.
	// pair<int, char> arr[3] = { {3, 'G'}, {1, 'E'}, {2, 'K'} };
	// sort(arr, arr + 3);
	// for (int i = 0; i < 3; i++)
	// 	cout << arr[i].second << " ";
	return 0;
}
























// main(){
// int n, m;
// cin >> n >> m;
// int arr[n][m];
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < m; i++) {
// 		cin >> arr[i][j];
// 	}
// }
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < m; i++) {
// 		cout << arr[i][j];
// 	}
// }
// }