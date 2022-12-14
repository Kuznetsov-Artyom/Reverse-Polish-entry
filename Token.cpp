#include "Token.hpp"



// ��������� �������� ������ �� �������
std::vector<std::string> Separation(std::string str)
{
	std::vector<std::string> tokens;
	std::string current;

	bool flagVar = false;

	for (size_t i = 0; i < str.size(); ++i)
	{
		char sym = str[i];

		if (sym == ' ')
		{
			if (flagVar)
			{
				tokens.emplace_back(current);
				flagVar = false;
				current.clear();
			}
			continue;
		}

		if (isdigit(sym) || isalpha(sym) || sym == '_' || sym == '.')
		{
			current += sym;
			flagVar = true;
		}
		else
		{
			if (flagVar)
			{
				tokens.emplace_back(current);
				flagVar = false;
				current.clear();
			}

			current += sym;
			tokens.emplace_back(current);
			current.clear();
		}
	}

	if (current.size()) tokens.emplace_back(current);

	return tokens;
}

// ��������� ������� �� ��� CONST
bool isConst(std::string token)
{
	if (token.front() == '.' || token.back() == '.') return false;
	if (token.size() > 1 && token[0] == '0' && token[1] != '.') return false;

	bool flagPoint = false;

	for (const auto& sym : token)
	{
		if (sym == '.')
		{
			if (!flagPoint) flagPoint = true;
			else return false;
		}
		if (!(isdigit(sym) || sym == '.')) return false;
	}

	return true;


}

// ��������� ������� �� ��� VARIABLE
bool isVariable(std::string token)
{
	if (isdigit(token[0])) return false;

	for (const auto& sym : token)
		if (!(isalpha(sym) || isdigit(sym) || sym == '_')) return false;

	return true;
}

// ��������� ������� �� ��� OPERATION
bool isOperation(std::string token)
{
	if (token.size() > 1) return false;

	char sym = token[0];

	if (sym == '-' || sym == '+' || sym == '*' || sym == '/' || sym == '^') return true;

	return false;
}

// ��������� ������� �� ��� OPEN_BRACKET
bool isOpenBracket(std::string token)
{
	if (token.size() > 1) return false;

	return token[0] == '(';
}

// ��������� ������� �� ��� CLOSE_BRACKET
bool isCloseBracket(std::string token)
{
	if (token.size() > 1) return false;

	return token[0] == ')';
}