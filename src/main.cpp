#include "vm.hpp"

int main()
{
	Cat::VM vm;
	vm.Initialize( 0xFFFF );  // 16 bit upper bound
}
