#include<iostream>
using namespace std;

// currentSubset[] mang tam
// subsetSize phan tu da co trong mang

void findSubsets(int arr[], int n, int index, int currentSubset[], int subsetSize){
    if(index == n){
        cout << "{ ";
        bool isFirst = true;
        for(int i = 0; i < subsetSize; i++){
            if(!isFirst){
                cout << ", ";
            }
            cout << currentSubset[i];
            isFirst = false;
        }
        cout << " }" << endl;
        return;
    }
    currentSubset[subsetSize] = arr[index];
    findSubsets(arr, n, index + 1, currentSubset, subsetSize + 1);

    findSubsets(arr, n, index + 1, currentSubset, subsetSize);
}


void printAllSubsets(int arr[], int n){
    int tempSubset[n]; 
    findSubsets(arr, n, 0, tempSubset, 0);
}

int main(){
    int n; cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
	}

    printAllSubsets(arr, n);

    return 0;
}
