#include"head.h"

Nasm::Nasm()
{
}

Nasm::Nasm(std::string nasmPath, std::string targetFilePath)
{
	this->nasmPath = nasmPath;
	this->targetFilePath = targetFilePath;
}

Nasm::~Nasm()
{
	this->nasmPath.~basic_string();
	this->targetFilePath.~basic_string();
}
void Nasm::w_bat()
{	
	std::string file = this->withoutSuffix(this->getTargetFilePath());
	file += "bat";
	FILE *fp = fopen(file.c_str(), "w");
	std::string cmd = toCmd(this->getNasmPath(), this->getTargetFilePath());
	fputs(cmd.c_str(), fp);
	fclose(fp);
}

void Nasm::setNasmPath(std::string nasmPath)
{
	this->nasmPath = nasmPath;
}

void Nasm::setTargetFilePath(std::string targetFilePath)
{
	this->targetFilePath = targetFilePath;
}
//获取bat路径
std::string Nasm::get_bat()
{
	std::string bat;
	bat = this->withoutSuffix(this->getTargetFilePath());
	bat += "bat";
	return bat;
}

std::string Nasm::getNasmPath()
{
	return this->nasmPath;
}

std::string Nasm::getTargetFilePath()
{
	return this->targetFilePath;
}

void Nasm::runBat()
{
	this->w_bat();
	system(this->get_bat().c_str());
}

std::string Nasm::toCmd(std::string nasmPath, std::string targetFilePath)
{
	//去除文件后缀
	std::string file = this->withoutSuffix(targetFilePath);
	std::string cmd = "cd " + nasmPath + "\n " + "nasm -f bin " + targetFilePath + " -o " + file + "bin";
	return cmd;
}
//去除文件后缀
std::string Nasm::withoutSuffix(std::string targetFilePath)
{
	std::string file = targetFilePath;
	for (int i = file.length() - 1; file[i] != '.'; i--) {
		file.pop_back();
	}
	return file;
}
