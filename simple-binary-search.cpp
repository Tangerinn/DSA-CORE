#include <iostream>
#include<vector>
int main() {
using namespace std;
vector<int>vec( 5);
cout<<"Enter 5 numbers (SORTED) : "<<endl;
for(int i=0;i<5;i++)
  {
    cin>>vec[i];
  }
//inputted array
  int target;
  cout<<"Enter target element : ";
  cin>>target;
  //inputted target, now binary search for target.

  int start=0;
  int end=4;
  int mid=(start+end)/2;
  while(start<=end)
    {
      if(target==vec[mid])
      {
        cout<<target<<" is present at index "<<mid;
      }
      if(target<vec[mid])
      {
        end=mid-1;
      }
      else if(target>mid)
      {
        start=mid+1;
      }
      mid = start + (end - start) / 2;
    
    
    }
}
