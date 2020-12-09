#include <iostream>
#include "emils_lib/emils_lib.h"
#include "translator.h"

int main(int argv, char *args[])
{
	std::string path("index.csv");
	if (argv > 1) path = args[1];
	setlocale(LC_ALL, "Turkish");
	while (true)
	{
		std::string wllTranslate = el::StrCalc::combineVecS(el::Inputs::getUntilB(';'));
		Translator lang(path);
		LOG(lang.Translate(wllTranslate));
	}
	return 0;
}