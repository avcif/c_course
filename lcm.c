#include <stdio.h>
#include <stdlib.h>
//ekok
long long calculated_gcd(long long n, long long m){
	if (n==0)
		return m ;
	
	return calculated_gcd(m%n,n);
}


long long calculated_lcm (long  long n,long long m){
	
	return n * m / calculated_gcd(n,m);
}

int main (){
	long long n,m,lcm;
	scanf("%lld %lld",&n,&m);
	
	lcm = calculated_lcm(n,m);
	printf("The LCM is %lld\n",lcm);
	
	return 0;
