#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP


#include <iostream>
#include "Record.hpp"
#include <map>
#include <stack>
#include <cmath>



class Calculator
{
private:
	Record tokens;
	std::map<std::string, double> tableVariable;
	std::vector<Token> postForm;
	std::string polStr;
	double result;

private:
	// +-+-+-+-+-+-+-+-+ ��������� ������ +-+-+-+-+-+-+-+-+
	 
	// ���������� ����������� ������ ������
	void GenerationPostForm();

	// �������� ������ ������ ���� Calculator
	void CopyOther(const Calculator& other);

public:
	// +-+-+-+-+-+-+-+-+ ������������ +-+-+-+-+-+-+-+-+

	Calculator(const std::string& str);
	Calculator(const Calculator& other);

	~Calculator() {}



	// +-+-+-+-+-+-+-+-+ ������ (�������) +-+-+-+-+-+-+-+-+
	
	// ���������� "�������� �������� ������"
	std::string GetPolStr() const noexcept;

	// ���������� �������� ���������� ������
	std::string GetSrcStr() const noexcept;

	// ���������� ��������� ����������
	double GetResult() const noexcept;

	// ���������� �������� ������������ ����������
	double GetValVar(const std::string& name);

	// ���������� ����������� ������ �� ������� � ����������� � �� ����������
	const std::map<std::string, double>& GetTableVar() const noexcept;




	// +-+-+-+-+-+-+-+-+ ������ +-+-+-+-+-+-+-+-+
	
	// �������� �������� ���������� �� �������
	void SetValVar(std::string name, double value);




	// +-+-+-+-+-+-+-+-+ ������ ������ +-+-+-+-+-+-+-+-+

	// ��������� ��������� ���������
	void Calculation();

	// ������� ���������� � �� �������� � ������� (����)
	void ShowTableVar() const noexcept;
	



	// +-+-+-+-+-+-+-+-+ ��������� +-+-+-+-+-+-+-+-+

	Calculator& operator = (const Calculator& other);
	Calculator& operator = (const std::string& str);
};



#endif // !CALCULATOR_HPP
