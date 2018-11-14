// AlphabetWars2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/5938f5b606c3033f4700015a
// Программа повторяет решение задачи AlphabetWars , только с более усложненными условиями..


#include "pch.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string alphabetWar(string fight)

{
	int scorepoint = 0;

	for (int i = 0; i < fight.size(); ++i)
	{
		if (fight[i] == '*' || fight[i + 1] == '*' || fight[i - 1] == '*') continue;

		switch (fight[i])
		{
		case 's':  scorepoint += 1;  break;
		case 'b':  scorepoint += 2;  break;
		case 'p':  scorepoint += 3;  break;
		case 'w':  scorepoint += 4;  break;

		case 'z':  scorepoint -= 1;  break;
		case 'd':  scorepoint -= 2;  break;
		case 'q':  scorepoint -= 3;  break;
		case 'm':  scorepoint -= 4;  break;

		}
	}

	if (scorepoint < 0) { return "Right side wins!"; }

	else if (scorepoint > 0) { return "Left side wins!"; }

	else { return "Let's fight again!"; }

}

void SampleTest() {

	assert(alphabetWar("z") == "Right side wins!");
	assert(alphabetWar("****") == "Let's fight again!");
	assert(alphabetWar("z*dq*mw*pb*s") == "Let's fight again!");
	assert(alphabetWar("zdqmwpbs") == "Let's fight again!");
	assert(alphabetWar("zz*zzs") == "Right side wins!");
	assert(alphabetWar("*wwwwww*z*") == "Left side wins!");
	assert(alphabetWar("*ww*ww*w*wz") == "Right side wins!");
	cout << "Sample Test is ok!" << endl;
}




int main()
{
	SampleTest();
}
