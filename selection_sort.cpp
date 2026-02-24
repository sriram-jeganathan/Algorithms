/* Selection Sort
We set the first element of the vector as the min
We traverse through the vector and compare each element with the min and swap if lower that min 

Time Complexity: O(n^2)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> selection_sort( vector<int>& arr ) {
    int min = 0;

    for ( int j = 0; j < arr.size() - 1; j++ ) {
        min = j;
        for ( int i = j + 1; i < arr.size(); i++ ) {
            if ( arr[i] < arr[min] ) {
                min = i;
            }
        }
        swap ( arr[j], arr[min] );
    }
    return arr;
}

int main ( void ) {
    vector<int> arr = {15,61,42,100,91,2,9,6};
    vector<int> sorted = selection_sort(arr);
    for ( auto& i : sorted ) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}