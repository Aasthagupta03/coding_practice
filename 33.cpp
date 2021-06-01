
#include <iostream>
using namespace std;

int minSwap(int *arr, int n, int k) {
	
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (arr[i] <= k){
			++count;
			cout<<"count "<<count<<endl;
		}

	int bad = 0;
	for (int i = 0; i < count; ++i)
		if (arr[i] > k){
		
			++bad;
			cout<<"bad "<<bad<<endl;
}
	
	int ans = bad;
	for (int i = 0, j = count; j < n; ++i, ++j) {
		
		if (arr[i] > k){
			--bad;
			cout<<"--b "<<bad<<endl;
		}
		
		if (arr[j] > k){
		
			++bad;
		cout<<"++b "<<bad<<endl;
		}
		ans = min(ans, bad);
	}
	return ans;
}


int main() {
	
	int arr[] = {2, 1, 5, 6, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << minSwap(arr, n, k) << "\n";

	return 0;
}

