#include <iostream>
//algo from wiki :)
bool is_prime(const int&n){
	if(n<=3)
		return n>1;
	else if (!(n %2)  || !(n%3))
		return true;
	for(unsigned int i = 5; i*i<=n; i+=6){
		if(!(n%i) || !(n%(i+2)))
			return false;
	}
	return true;
}
//sexy numbers -- prime numbers, that differ from each other by 6
int main(){
	const int n;
	std::cin >>n;
	for(int i =0;i<=n;++i){
		if(is_prime(i) && is_prime(i+6))
			std::coeut << i << ' ' << i+6;
	}
	return 0;
}
