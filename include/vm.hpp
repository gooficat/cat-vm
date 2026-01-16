#pragma once

#include <cstdint>
#include "rom.hpp"
#include "system.hpp"

namespace Cat
{

class VM
{
  public:  // no constructors. initializer functions instead
	void Initialize( const std::uint64_t stack_size );

	void LoadRom( const Rom &rom );

  private:
	std::uint64_t stack_size;
	System SYSTEM;
};

}  // namespace Cat
