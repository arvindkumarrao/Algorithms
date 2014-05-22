/*Simple Dynamic programming*/
#include <iostream>
using namespace std;
int subsetsum(int arr[],int sum,int n){
  /*if sum is zero return 1*/
	if(sum==0 && n==0) return 1;
  /*if sum is not zero return 0*/
	if(n==0 && sum!=0) return 0;

  /*if last element is greater than sum leave it*/
	if(sum>arr[n-1]) return subsetsum(arr,sum,n-1);

  /*Find sum leaving last element or including last element*/
	return (subsetsum(arr,sum-arr[n-1],n-1) ||subsetsum(arr,sum,n-1)) ;
}
int main() {
	int set[] = {3, 34, 6, 12, 5, 2};
  int sum = 9;
  int n = sizeof(set)/sizeof(set[0]);
  if (subsetsum(set, n, sum) == 1)
     cout<<"Found a subset with given sum";
  else
     cout<<"No subset with given sum";
  return 0;
}
