#include <iostream>
int main(){
	unsigned long long limit,sum{0};
	std::cin >> limit;
	for(unsigned long long i = 3; i<=limit; ++i){
		if(!(i%3) || !(i%5))
			sum+=i;
	}
	std::cout << sum;
	return 0;
}
