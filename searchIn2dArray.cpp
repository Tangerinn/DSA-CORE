#include <iostream>
#include <vector>
using namespace std;
int main() {
  // search linearly in 2D array
  int target = 38;
  vector<vector<int>> vec = {
      {10,20,30,40}, {15,25,35,45}, {28,29,37,49}, {33,34,38,50}

  }; // a 4x4 matrix

  int row = 0;
  int col = vec.size() - 1;
  bool boolean=false;
  
  while (row < vec.size() - 1 && col >= 0) {
    if (vec[row][col] == target) {
      cout << target << " found!";
      boolean=true;
      break;
    } else if (vec[row][col] > target) {
      col--;
    } else {
      row++;
    }
  }
  if(boolean==false)
  {
    cout << target << " not found :( ";

  }
}


/*
NOTES : 

1) In matrix related questionsa when you're trying to reduce the search space, you have to think about how to eliminate ROWS AND COLUMNS.
2) Approach : 
  We start w the element on the topmost right. We eliminate whole rows and 
  columns which have no chance of containing the target (leveraging the 
  property of the 2D array that it is sorted).

*/
