#pragma once

#include <cstdint>
class CatVM
{
  public:
	void Initialize( const std::uint64_t stack_size );

  private:
	std::uint64_t stack_size;
};
