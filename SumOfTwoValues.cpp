#include <iostream>

using namespace std;

int findSum(int arr[], int n, int x){
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j] == x){
				cout << i+1 << " " << j+1;
				return 0;
			}
		}
	}
	
	return 1;
}


int main()
{
    int n,x;
    
    cin >> n;
    cin >> x;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	if(findSum(arr, n, x)){
		cout << "Impossible";
	}

    return 0;
}
