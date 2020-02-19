#include <iostream>
#include <numeric> // std::accumulate
#include <vector>
int gcd(const int &a,const  int& b){
	return b ? gcd(b, a%b):a;
}

int lcm(const int &a, const int &b){
	auto h = gcd(a,b);
	return h? (a* (b/h)) :0;
}

template<typename inputtype>
auto lcmr(inputtype first, inputtype last){
	return std::accumulate(first,last,1,lcm);
}

int main(){
	uint n;
	std::cin >> n;
	std::vector<int> vec;
	vec.resize(n);
	for(auto &i: vec)
		std::cin >> i;
	std::cout << lcmr(std::begin(vec), std::end(vec)) << std::endl;
}
