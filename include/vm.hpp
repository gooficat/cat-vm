#pragma once

#include <cstdint>
#include <memory>
#include "rom.hpp"

namespace Cat
{

class VM
{
  public:  // no constructors. initializer functions instead
	void Initialize( const std::uint64_t stack_size );

	void LoadRom( const Rom& rom );

  private:
	std::uint64_t stack_size;

	class System
	{
	  public:
		std::unique_ptr<uint8_t[]> STACK;
		std::uint64_t BASE_POINTER;
		std::uint64_t STACK_POINTER;
	} SYSTEM;
};

}  // namespace Cat
