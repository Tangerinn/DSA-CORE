#include <iostream>
#include<vector>
using namespace std;


int binarySearch(int target,int newSize, vector<char>newLetters)
{

    //do the binary search
    int start=0;
    int end=newSize-1;
    int mid=start+ (end-start)/2;
    bool found=false;
    while(start<=end)
      { 

        if(target==newLetters[mid] && target!=newLetters[newSize-1])
        {
          cout<<"Greater character : "<<newLetters[mid+1];
          found=true;
          break;
        }
          //special condition for last letter in array.
        else if(target==newLetters[newSize-1])
        {
          cout<<"Greatest character does not exist";
          break;
        }

       if(target<newLetters[mid])
       {
         end=mid-1;
       }  

        else if(target>newLetters[mid])
       {
         start=mid+1;
       } 

     mid=start+ (end-start)/2;

      }
  if(start>end && found==false)
  {
    cout<<"Greater character : "<<newLetters[start];

  }
return newLetters[start];
}
int main() {
using namespace std;
int size;
cout<<"Enter size of array : ";
cin>>size;

vector<char> letters(size);
cout<<"Enter "<<size<<" letters (SORTED, WITH DUPLICATES): "<<endl;
for(int i=0;i<size;i++)
  {
    cin>>letters[i];
  }
//remove duplicates
int newSize=size;
vector<char> newLetters(newSize);
newLetters[0]=letters[0];

  for(int i=1;i<newSize; )
    {
for(int j=1;j<size;j++)
  {
if(letters[j]!=letters[j-1])
{
 newLetters[i]=letters[j];
 i++;
}
    else
{
  newSize--;
}
  }
    }
cout<<"Sorted array, without duplicates : ";
  for(int i=0;i<newSize;i++)
    {
      cout<<newLetters[i]<<" ";
    }
cout<<endl;
  //now, find smallest letter greater than the target.
  char target;
  cout<<"Enter target element : ";
  cin>>target;
   binarySearch( target,newSize, newLetters);
  return 0;
}
