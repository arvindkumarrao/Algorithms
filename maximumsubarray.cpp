#include <iostream>
using namespace std;
int maximumsubarray(int a[],int n){
	int max_so_far = a[0], i;
	int curr_max = a[0];
	for (i = 1; i < n; i++)
	{
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far, curr_max);
		}
		return max_so_far;
}
int main() {
	int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maximumsubarray(a, n);
   cout<<"Maximum contiguous sum is:"<<max_sum;
	// your code goes here
	return 0;
}
