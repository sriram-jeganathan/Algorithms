/* Bubble Sort
We traverse through the given list/array
We use two loops and check two elements at a time

Time Complexity: O(n^2)
Space Complexity: O(n)

Here we use a integer vector
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bubble_sort ( vector<int>& arr ) {
    for ( int i = 0; i < arr.size(); i++ ) {
        for ( int j = i+1; j < arr.size(); j++ ) {
        	if ( arr[i] > arr[j] ) {
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr;
}

int main ( void ) {
    vector<int> arr = {15,61,42,100,91,2,9,6};
    vector<int> sorted = bubble_sort(arr);
    for ( auto i : sorted ) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

