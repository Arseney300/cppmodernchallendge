#include <iostream>
#include <cmath> // for std::sqrt

int sum_divisors(int const &number){
	int result  = 1; //1 is divisor too
	for(unsigned int i =2; i<=std::sqrt(number);i++){
		if(number%i==0){
			// if both divisors are same then add
			// it only one else add both
			result+= (i == (number)/i)?i:(i+(number/i));
		}
	}
	return result;
}

int main(){
	unsigned int n;
	std::cin >> n;
	for(int i =1; i<=n;++i){
		auto sum = sum_divisors(i);
		if(sum > i){
			std::cout << i << ' ' << sum-i << std::endl;
		}
	}
}
