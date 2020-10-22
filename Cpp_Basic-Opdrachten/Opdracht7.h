#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

class Opdracht7
{
	
public:
	void start();
private:
	const std::string path = "C:/Users/inger/OneDrive/Documents/HKU/Y2/C++ Basic/Cpp_Basic-Opdrachten";
	std::string tempPath;
	std::string tempPathLatin;
	std::ifstream in_stream;
	char ch;
	int fileCharAmount;
};

