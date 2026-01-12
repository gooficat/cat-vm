#pragma once

#include <print>

#ifdef _DEBUG
#define DebugPrint( ... ) std::print( __VA_ARGS__ )
#define DebugPrintLn( ... ) std::println( __VA_ARGS__ )

#else
#define DebugPrint( ... )
#define DebugPrintLn( ... )

#endif
