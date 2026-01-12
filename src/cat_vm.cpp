#include "cat_vm.hpp"
#include "debug.hpp"

void CatVM::Initialize( const std::uintmax_t stack_size )
{
	this->stack_size = stack_size;
	std::println( "Hello from Cat VM!" );
	DebugPrintLn( "Initializing with stack of size {}", stack_size );
}
