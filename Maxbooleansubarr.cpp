#include <iostream>
using namespace std;
#define R 6
#define C 5
int minimum(int a, int b, int c){
	if(a<b && a<c) return a;
	if(b<a && b<c) return b;
	else return c;
}
void MaxSubSquareDimention(int M[R][C]){
	int S[R][C],i,j;
	for(i=0;i<R;i++){
		S[0][i]=M[0][i];
	}
	for(i=0;i<C;i++){
		S[i][0]=M[i][0];
	}
	for(i=1;i<R;i++){
		for(j=1;j<C;j++){
			if(M[i][j] == 1) 
				S[i][j] = minimum(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
			else
				S[i][j] = 0;
		}
	}
	int maxi,maxj,max=0;
		for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			if(S[i][j]>max){
				
				maxi=i;
				maxj=j;
				max=S[i][j];
			}
		}
	}
	cout<<maxi+1<<"X"<<maxj+1;
}
int main()
{
  int M[R][C] =  {{0, 1, 1, 0, 1}, 
                   {1, 1, 0, 1, 0}, 
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}};
                
  MaxSubSquareDimention(M);
  return 0;
}  
