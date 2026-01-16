#pragma once

#include <cstdint>
#include <memory>

namespace Cat
{
class System
{
  public:
	enum class Instruction : std::uint8_t {
		BRK,
		ADD,
		SUB,
		MUL,
		DIV,
		PSH,
		POP,
		RET,
		JMP,
		JNZ,
	};

	void Execute();

	std::unique_ptr<uint8_t[]> STACK;

	std::uint64_t A;
	std::uint64_t X;
	std::uint64_t Y;
	std::uint64_t SP;
	std::uint64_t BP;

	std::uint64_t PC;

	enum class Status {
		OK,
		EXCEPTION,
		TRAP,
	} STATUS;
};
}  // namespace Cat
