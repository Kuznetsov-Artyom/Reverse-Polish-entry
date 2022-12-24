#ifndef RECORD_HPP
#define RECORD_HPP


#include "Token.hpp"
#include "ExceptionRecord.hpp"




// ��������� �� ������������ ������� ������
bool CheckingParentheses(const std::string& str);




class Record
{
private:
	std::string srcStr{};
	std::vector<std::string> strTokens;
	std::vector<Token> tokens{};

private:
	// +-+-+-+-+-+-+-+-+ ��������� ������ +-+-+-+-+-+-+-+-+
	
	// ��������� �������� ������ �� �������
	void SplitOnTokens(const std::string& str);

	// ���������� ���� ������
	void DefiningTypes();

	// ��������� ������������ ���������� ���������
	void CheckingCorrect();

public:
	// +-+-+-+-+-+-+-+-+ ������������ +-+-+-+-+-+-+-+-+

	Record() {}
	Record(const std::string& str);
	Record(const Record& other);



	// +-+-+-+-+-+-+-+-+ ������ (�������) +-+-+-+-+-+-+-+-+
	 
	// ���������� ���������� ������ � ������
	size_t GetCount() const noexcept;

	// ���������� �������� ���������� ������
	std::string  GetSrcStr() const noexcept;




	// +-+-+-+-+-+-+-+-+ ��������� +-+-+-+-+-+-+-+-+

	Record& operator = (const Record& other);
	Record& operator = (const std::string& str);
	Token& operator [] (const size_t& pos);
};




#endif // RECORD_HPP