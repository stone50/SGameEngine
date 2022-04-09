#pragma once

#include <unordered_set>

class SSearchOptions {
public:
	std::unordered_set<std::string> tagsMustInclude;
	std::unordered_set<std::string> tagsMustExclude;
	bool searchChildrenOnly;

	SSearchOptions(
		std::unordered_set<std::string> _tagsMustInclude = std::unordered_set<std::string>(),
		std::unordered_set<std::string> _tagsMustExclude = std::unordered_set<std::string>(),
		bool _searchChildrenOnly = false
	);
};