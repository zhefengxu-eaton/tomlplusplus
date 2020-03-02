#define TOML_ALL_INLINE 0
#define TOML_IMPLEMENTATION
#include "../include/toml++/toml.h"

#define CATCH_CONFIG_RUNNER
#include "catch2.h"

int main(int argc, char* argv[])
{
	#ifdef _WIN32
	SetConsoleOutputCP(65001);
	#endif

	return Catch::Session().run(argc, argv);
}
