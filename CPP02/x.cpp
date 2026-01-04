#include <iostream>
#include <string>


// 32 bit == 263.3
// 263.3 --> 100000111 = 263 
// fraction bits-->
// 0.3 *2 | 0.6 | 0
// 0.6 *2 | 1.1 | 1
// 0.2 *2 | 0.4 | 0
// 2.4 *2 | 0.8 | 0
// 0.8 *2 | 1.6 | 1
// 0.6 *2 | 1.2 | 1
// 0.3 : 01001100110011...
// 263.3 --> 100000111.01001100110011...
// we have 3 setps 
// 1st 
class A {
	private:
		int a;
		static const int fract_bits = 8;
		std::string str;
	public:
		A() : a(100) , str("hello") {

			std::cout << "xxxxxxxxxxxxx" << std::endl;
		};
		A(int x , std::string xxx) : a(x) , str(xxx) {
			std::cout << "param const is here" << std::endl;
		}
		A(A &copy_obj) : a(copy_obj.a) , str(copy_obj.str) {
			std::cout << "copy const" << std::endl;
		}

/*		A &operator=(const A &copy_ass) {
			std::cout << "copy ass is here" << std::endl;
			if(this != &copy_ass) {
				a = copy_ass.a;
				str = copy_ass.str;
			} 
			return *this;
		};
*/
		std::string &get() {
			return str;
		}
		int get_age() {
			return a;
		}
		~A() {	
			std::cout << "gggggggggggggggg" << std::endl;
		};
};

int main() {
	A je;
	A ej(je);
	A x(ej);
	ej = je = x;
	std::cout << x.get() << std::endl;
	std::cout << x.get_age() << std::endl;
}
