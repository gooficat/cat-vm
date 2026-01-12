#include "vm.hpp"
#include "debug.hpp"

namespace Cat
{

void VM::Initialize( const std::uintmax_t stack_size )
{
	this->stack_size = stack_size;
	std::println( "Hello from Cat VM!" );
	DebugPrintLn( "Initializing with stack of size {} [0x{:X}]", stack_size, stack_size );

	this->SYSTEM.STACK = std::make_unique<std::uint8_t[]>( stack_size );
}

void VM::LoadRom( const Rom &rom )
{
	if ( this->stack_size < rom.REQUIRED_STACK_SPACE ) {
		std::println( "Error: cannot load ROM due to insufficient stack space [{} available - {} required].",
					  this->stack_size,
					  rom.REQUIRED_STACK_SPACE );
	}
}

}  // namespace Cat
