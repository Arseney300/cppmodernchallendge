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

int main(){
	const int n;
	std::cin >>n;
	for(auto i = n; i>1;i--){
		if(is_prime(i)){
			std::cout << i<<std::endl;
			return 0;
		}
	}
	return 0;
}
