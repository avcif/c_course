#include <stdio.h>
#include <stdlib.h>


int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long mult =1,destination = n -k;
	// 12 2 => 12*11
	while(n>destination){
		mult *= n ;
		n--;
			
	}
	printf("%lld \n",mult);
	return 0;
}