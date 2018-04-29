#include "head.h"



Path::Path()
{
	std::ifstream fin(this->Paht_txt);
	if (!fin) {
		std::cout << "Path.txt文件不能打开" << std::endl;
		exit(0);
	}
	std::getline(fin, this->nasmPath);
	std::getline(fin, this->nasmPath);
	std::getline(fin, this->targetPath);
	std::getline(fin, this->targetPath);
	fin.close();
}


Path::~Path()
{
}

std::string Path::getNasmPath()
{
	return this->nasmPath;
}

std::string Path::getTargetPath()
{
	return this->targetPath;
}
