//.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class DirReduction {

public: static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
{
	std::vector<std::string> res;
	for (std::string & str : arr)
	{
		if (res.empty()) res.push_back(str);
		else
		{
			switch (str[0])
			{
			case 'N': if (res.back()[0] == 'S') res.pop_back(); else res.push_back(str); break;
			case 'S': if (res.back()[0] == 'N') res.pop_back(); else res.push_back(str); break;
			case 'W': if (res.back()[0] == 'E') res.pop_back(); else res.push_back(str); break;
			case 'E': if (res.back()[0] == 'W') res.pop_back(); else res.push_back(str); break;
			}
		}
	}
	return res;
}
};

int main()
{
    std::cout << "Hello World!\n"; 
}

