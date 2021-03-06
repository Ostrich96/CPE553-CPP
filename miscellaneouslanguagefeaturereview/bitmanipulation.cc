#include <iostream>
using namespace std;

int main() {
	int a = 5 & 3; // 101 & 011 = 001
	int b = 5 | 3; // 101 | 011 = 111 = 7
	int c = 5 ^ 3; // 101 XOR 011 = 110 = 6
	int d = ~3;    // 00000000000000000000000000000011
                 // 11111111111111111111111111111100
  int e = 1 << 4;// 00000000000000000000000000000001
	               // 00000000000000000000000000010000 left shift by 4 (= *16)
	int f = 5 << 3; // equivalent to multiplying by 2 to 3 = 40
	int g = 43 >> 1; // equivalent to divide by 2 = 21 (truncates)
	int h = 28 >> 3; // equivalent to divide by 8 = 3
	// 28 = 11100      --> 00000000000000000000011
	
	int i = -5 >> 3; // 00000000000000000000000000000101 = 5
                   // 11111111111111111111111111111010 first invert
	                 // 11111111111111111111111111111011 =-5
	                 // 11111111111111111111111111111101 = -3
	                 // 00000000000000000000000000000011 = 3
	
                   // 11111111111111111111111111111110 = -2
                   // 00000000000000000000000000000010=2

	cout << (-5 >> 1) << '\n';
	cout << (-5 >> 2) << '\n';
	cout << (-5 >> 3) << '\n';
	cout << (-5 >> 4) << '\n';
	cout << (-5 >> 5) << '\n';
	// in Java only
	// >>> is unsigned right shift

	//  01001001010010010100100101001001
	//  10010010100100101001001010010010 // rotate left by 1 bit
	
	uint32_t x;
	cin >> x;
	x = (x << 1) | (x >> 31); // optimizer will substitute rotate left by 1!!!!
	// or rotate right by 31
	cout << x;
}
