#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

void MainMenu();

class Opdracht7
{
	
public:
	void start();
private:
	void menu();
	void backwards();
	void jumbled();

	int x;

	const std::string path = "C:/Users/inger/OneDrive/Documents/HKU/Y2/C++ Basic/Cpp_Basic-Opdrachten";
	std::string tempPath;
	std::string tempPathLatin;
	std::ifstream in_stream;
	std::ifstream in_stream_latin;
	std::ofstream out_stream_backwards;
	std::ofstream out_stream_jumble;
	char ch;
	std::string line;
	std::streamoff fileCharAmount;
};

