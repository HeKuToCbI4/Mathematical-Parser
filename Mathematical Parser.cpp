// Mathematical Parser.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Simplificator.h"


int main()
{
	std::string str;
	do {
		std::cin >> str;
		Simplificator::simplify(str);
		std::cout << str << std::endl;
	} while (str != "exit");
	system("pause");
    return 0;
}

