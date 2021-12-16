#pragma once
#include <string>

class ClassDesignA {
public:
	ClassDesignA(std::string url);

	std::string getURL();
	std::string getPath();
	std::string getScheme();
	std::string getAuthority();
	std::string getBrokenURL();
	int getSchemeEnd();
	int getAuthorityStart();
	int getAuthorityEnd();

private:
	// Variable to hold user URL
	std::string userURL;

	// Variables to hold different parts of the user URL
	std::string scheme;
	int schemeEnd;
	std::string authority;
	int authorityStart;
	int authorityEnd;
	std::string path;

	std::string brokenURL;
};