//#include "Record.hpp"
//
//
//
//
//
//Record::Record(const std::string& str) : srcStr{ str }
//{
//	std::vector<std::string> strTokens = Separation(str);
//
//	for (auto& token : strTokens)
//	{
//		// �������� �� ��� CONST
//		if (isConst(token))
//		{
//			tokens.emplace_back(Token(TypeToken::CONST, token, std::atof(token.c_str())));
//		}
//		// �������� �� ��� VARIABLE
//		else if (isVariable(token))
//		{
//			tokens.emplace_back(Token(TypeToken::VARIABLE, token));
//		}
//		// �������� �� ��� OPERATION
//		else if (isOperation(token))
//		{
//			int priority = (token == "+" || token == "-") ? 1 : ((token == "^") ? 3 : 2);
//			tokens.emplace_back(Token(TypeToken::OPERATION, token, static_cast<double>(priority)));
//		}
//		// �������� �� ��� OPEN_BRACKET
//		else if (isOpenBracket(token))
//		{
//			tokens.emplace_back(Token(TypeToken::OPEN_BRACKET, token));
//		}
//		// �������� �� ��� CLOSE_BRACKET
//		else if (isCloseBracket(token))
//		{
//			tokens.emplace_back(Token(TypeToken::CLOSE_BRACKET, token));
//		}
//		// ���� ��� �� ��������� (������������ ��������)
//		else throw - 1;
//	}
//}
//
//size_t Record::GetCount() const noexcept { return tokens.size(); }
//std::string  Record::GetSrcStr() const noexcept { return srcStr; }
//
//
//Record& Record::operator = (const Record& other)
//{
//	if (this == &other) return *this;
//
//	srcStr = other.srcStr;
//	tokens = other.tokens;
//
//	return *this;
//}
//Record& Record::operator = (const std::string& str)
//{
//	if (str == srcStr) return *this;
//
//	Record tmp(str);
//	*this = tmp;
//
//	return *this;
//}
//Token& Record::operator[](const size_t& pos)
//{
//	return tokens.at(pos);
//}
