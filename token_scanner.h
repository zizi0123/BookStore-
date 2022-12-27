//

//

#ifndef _BOOKSTORE_TOKENSCANNER_H
#define _BOOKSTORE_TOKENSCANNER_H

#include <string>
#include <vector>
#include <cstring>
#include <cctype>

long long DoubleStringToll(const std::string &s);    //为了防止丢失精度，把所有浮点数都存成整数。

std::vector<std::string>ProcessKeywords(const char *);

//double StringtoDouble(const std::string &s);
#endif //_BOOKSTORE_TOKENSCANNER_H
