#include <iostream>
using namespace std;
int main()
{
char letters[5]={'a','c','d','g','i'}; //sample array of characters.
char target='h'; 

  int start=0;
  int end=4;
  int mid=(start+end)/2;

  bool found=false; //flag value that indicates whether target is found.

  cout<<"Smallest letter greater than/equal to "<<target<<" : ";

  //binary search begins here.
  while(start<=end)
    {
      if(target==letters[mid])
      {
        cout<<target;
        found=true;
      }
      if(target<letters[mid])
      {
        end=mid-1;
      }
      else
      {
        start=mid+1;
      }
      mid=(start+end)/2;
    }
//if loop ends and target is not found, print the floor of the target.
if(start>end && found==false)
{
  cout<<letters[end];
}
return 0;
}
