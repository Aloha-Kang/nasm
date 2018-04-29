#pragma once
#include<bits\stdc++.h>
/*
	从nasm.exe文件路径和汇编目标文件路径生成cmd命令
*/
class Nasm
{
public:
	Nasm();
	Nasm(std::string, std::string);
	~Nasm();	
	void setNasmPath(std::string);
	void setTargetFilePath(std::string);	
	std::string getNasmPath();
	std::string getTargetFilePath();
	void runBat();
	std::string withoutSuffix(std::string);
private:
	void w_bat();
	std::string get_bat();
	std::string nasmPath, targetFilePath;
	//绝对路径+绝对路径
	std::string toCmd(std::string, std::string);	
};
