#include "SSearchOptions.h"

SSearchOptions::SSearchOptions(
	std::unordered_set<std::string> _tagsMustInclude,
	std::unordered_set<std::string> _tagsMustExclude,
	bool _searchChildrenOnly
) :
	tagsMustInclude(_tagsMustInclude),
	tagsMustExclude(_tagsMustExclude),
	searchChildrenOnly(_searchChildrenOnly)
{}