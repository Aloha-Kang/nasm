#pragma once
#include"head.h"
class Path
{
public:
	Path();
	~Path();
	std::string getNasmPath();
	std::string getTargetPath();
private:
	std::string nasmPath;
	std::string targetPath;
	const std::string Paht_txt = "Path.txt";
};

