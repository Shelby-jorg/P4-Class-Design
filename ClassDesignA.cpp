#include "ClassDesignA.h"
#include <string>
#include <iostream>

ClassDesignA::ClassDesignA(std::string url)
	: userURL{ url } {}

std::string ClassDesignA::getURL() {
	return userURL;
}

std::string ClassDesignA::getPath() {
	// By adding the authority end index, as well as the scheme end index, we can get the path after these parts
	path = userURL.substr((authorityEnd + schemeEnd), userURL.size());
	return path;
}

std::string ClassDesignA::getAuthority() {
	// 2 is added to give the index including the //
	authorityStart = userURL.find("//");
	authorityEnd = brokenURL.find("/") + 2;
	authority = userURL.substr(authorityStart, authorityEnd);
	return authority;
}

std::string ClassDesignA::getScheme() {
	// 1 is added to give the index including the :
	schemeEnd = userURL.find(":") + 1;
	// 2 is added to give the index including the //
	brokenURL = userURL.substr(schemeEnd + 2, userURL.size());
	scheme = userURL.substr(0, schemeEnd);
	return scheme;
}

void printClassDesignInfo(ClassDesignA designA) {
	std::cout << designA.getURL() << "\n" << "Path: " << designA.getPath() << "\n" << "Authority: " <<
		designA.getAuthority() << "\n" << "Scheme: " << designA.getScheme();
}
