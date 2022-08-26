//Name:-Swadheen Ranjan Singh
//Roll No:-2010991400
//Set No:-04
//Question-1 Find the minimum Index of a repeating element in the linear timeand single trasversal of the array

#include <iostream>
#include <unordered_set>
using namespace std;
 
// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    // creating an empty set to store array 
    unordered_set<int> set;
 
    // traversing the array 
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element wad previously found, update the minimum index
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else {
            set.insert(arr[i]);
        }
    }
 
    // invalid input
    if (minIndex == n) {
        cout<<"Invalid Output";
        return 0;
    }
 
    // return minimum index
    return minIndex;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int minIndex = findMinIndex(arr, n);
 
    if(minIndex == 0){
        return 0;
    }
    else if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
   
 
    return 0;
}

