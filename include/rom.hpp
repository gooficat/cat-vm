#pragma once

#include <cstdint>
#include <memory>

namespace Cat
{

class Rom
{
  public:
	std::uint64_t ENTRY_POINT;
	std::uint64_t MEMORY_SIZE;
	std::unique_ptr<std::uint8_t[]> MEMORY;
	std::uint64_t REQUIRED_STACK_SPACE;
};

}  // namespace Cat
