#include "../src/quiz8.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

std::string captureStdOutput(std::string a, std::string b)
{
	// Redirect cout.
	std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
	std::ostringstream strCout;
	std::cout.rdbuf(strCout.rdbuf());

	// This goes to the string stream
	// TODO: this will be changed to whatever method you are testing
	findTheDigits(a, b);

	// Restore old cout.
	std::cout.rdbuf(oldCoutStreamBuf);

	return strCout.str();
}

TEST_CASE("Test 1", "[simple]")
{
	std::string x = "1", y = "1";
	REQUIRE(captureStdOutput(x, y) == "11");
}

TEST_CASE("Test 2", "[simple]")
{
	std::string x = "1f", y = "1s";
	REQUIRE(captureStdOutput(x, y) == "1f1s");
}
