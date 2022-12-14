//#ifndef TOKEN_HPP
//#define TOKEN_HPP
//
//
//
//#include <string>
//#include <vector>
//#include <cctype>
//
//
//
//
//// ��������� �������� ������
//enum class TypeToken
//{
//	DEFAULT = 0,
//	CONST = 1,
//	VARIABLE = 2,
//	OPERATION = 3,
//	OPEN_BRACKET = 4,
//	CLOSE_BRACKET = 5
//};
//
//
//
//
//
//// ������� ���������
//enum class Arity
//{
//	DEFAULT = 0,
//	UNARY = 1,
//	BINARY = 2
//};
//
//
//
//
//// ��������� ����������� �������
//struct Token
//{
//	TypeToken type = TypeToken::DEFAULT;
//	std::string name{};
//	double value{};
//
//	// ���� ��� ������� ���� OPERATION
//	Arity arity = Arity::DEFAULT;
//
//	Token() {}
//	Token(TypeToken t, std::string n, double v = 0.0, Arity a = Arity::DEFAULT) : type{ t }, name{ n }, value{ v }, arity{ a } {}
//};
//
//
//
//// ��������� �������� ������ �� �������
//std::vector<std::string> Separation(std::string str);
//// ��������� ������� �� ��� CONST
//bool isConst(std::string token);
//// ��������� ������� �� ��� VARIABLE
//bool isVariable(std::string token);
//// ��������� ������� �� ��� OPERATION
//bool isOperation(std::string token);
//// ��������� ������� �� ��� OPEN_BRACKET
//bool isOpenBracket(std::string token);
//// ��������� ������� �� ��� CLOSE_BRACKET
//bool isCloseBracket(std::string token);
//
//
//
//
//
//
//#endif // !TOKEN_HPP