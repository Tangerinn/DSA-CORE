#include <iostream>
#include <vector>
using namespace std;
// Function to perform binary search and find the ceiling of a target value in a sorted array

void binarySearch(int size, int target, vector<int> arr)
{
  // Initialize start, end, and mid pointers for binary search
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
 
  bool found = false; // Flag to indicate if the target value is found
  
  while (start <= end)
    {
    if (target == arr[mid]) 
    {
      found = true;
      cout << arr[mid];
    }
    if (target < arr[mid])
    {
      end = mid - 1;
    } 
    else // target>arr[mid]
    {
      start = mid + 1; 
    }
    mid = (start + end) / 2; // Calculate the new mid pointer
  }
   // If the loop ends and the target value is not found- print ceiling
  if (start > end && found == false) 
  {
    cout << arr[start];
  }
}

int main() {
  int target = 5;
  vector<int> arr = {1, 2, 6, 7, 8}; //sample array
  // Call the binarySearch function to find and print the ceiling of the target value
cout<<target<<"'s ceiling is : ";
  binarySearch(5, target, arr); 
}
