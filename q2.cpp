//Name:-Swadheen Ranjan Singh
//Roll No:-2010991400
//Set No:-04
//Question-2 Check if only consecutive integers form the array

#include <iostream>
#include <unordered_set>
using namespace std;
// To check if consecutive integers are present
bool isConsecutive(int arr[], int n)
{
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
 
    // Determine the minimum and maximum element in an array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 
    // for an array to contain consecutive integers, the difference between the maximum and minimum element in it should be exactly `n-1
    if (max - min != n - 1) {
        return false;
    }
 
    // creating an empty set 
    unordered_set<int> visited;
 
    // traverse the array and checks if each element appears only once
    for (int i = 0; i < n; i++)
    {
        // if an element is seen before, return false
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
 
        // mark element as seen
        visited.insert(arr[i]);
    }
 
    // we reach here when all elements in the array are distinct
    return true;
}
 
int main()
{
    int arr[] = { -1,5,4,2,0,3,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    isConsecutive(arr, n)? cout << "The array contains consecutive integers from -1 to 5":
                        cout << "The array does not contain consecutive integers ";
 
    return 0;
}
