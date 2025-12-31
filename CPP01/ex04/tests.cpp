#include <iostream>
#include <string>

#include "Replace.hpp"

static int check(std::string const &got, std::string const &expected, char const *name) {
	if (got != expected) {
		std::cerr << "FAIL: " << name << "\n"
				  << "  got:      [" << got << "]\n"
				  << "  expected: [" << expected << "]\n";
		return 1;
	}
	std::cout << "OK: " << name << std::endl;
	return 0;
}

int main() {
	int rc = 0;

	rc |= check(replaceAll("hello", "l", "L"), "heLLo", "basic replace");
	rc |= check(replaceAll("aaaa", "aa", "b"), "bb", "multiple occurrences");
	rc |= check(replaceAll("abc", "x", "y"), "abc", "no match");
	rc |= check(replaceAll("", "a", "b"), "", "empty input");
	rc |= check(replaceAll("abc", "a", ""), "bc", "remove occurrences");

	return rc;
}
