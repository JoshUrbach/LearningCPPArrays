
#include <iostream>
using namespace std;

//Print all pairs of elements 
void printAllPairs(int arr[], int n){

    for(int i = 0; i < n; i++){
        int x = arr[i];
        for(int j = i + 1; j < n; j++){
            int y = arr[j];
            cout << x << ", " << y << endl;
        }
        cout <<endl;
    }

}

int main() {
	// your code goes here

    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    //Print all elements of array
    for(int x : arr){
        cout << x << endl;
    }

    printAllPairs(arr, n);


	return 0;
}

