#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <queue>

struct RPN
{
	std::string	value;
	RPN			*right;
	RPN			*left;
};

RPN		*buildExpressionTree(const std::string &expression);
bool	isValidRPN(const std::string &expression);
double	evaluateExpression(RPN *root);
void 	deleteExpressionTree(RPN *root);

#endif
