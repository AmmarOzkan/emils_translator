#pragma once
#include "emils_lib/emils_lib.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

struct TranslateVal { std::string bef, aft; };

class Translator
{
private:
	std::vector<TranslateVal> translates;
public:
	void addTranslator(TranslateVal a) { translates.push_back(a); }
	void addTranslator(std::string bef, std::string aft) { translates.push_back({ bef,aft }); }

	Translator(std::string filePath)
	{
		std::fstream translatesFile(filePath); std::string input;
		translatesFile.imbue(std::locale("Turkish"));
		while (std::getline(translatesFile, input))
		{
			if (input[0] == '#') continue;
			std::vector<std::string> splitted = el::StrCalc::splitOut(input, ',', '"');
			translates.push_back({ splitted[0], splitted[1] });
		}
	}
	Translator(){  }

	std::string Translate(std::string text)
	{
		for (TranslateVal t : translates)
		{
			for(int i = el::StrCalc::howManyContains(text,t.bef) ; i>0 ; i--) text = el::StrCalc::Replace(text, t.bef, t.aft);
		}
		return text;
	}

	void printAllTranslates()
	{
		for (TranslateVal t : translates) LOG(t.bef + "|" + t.aft);
	}


};


