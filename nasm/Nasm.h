#pragma once
#include<bits\stdc++.h>
/*
	��nasm.exe�ļ�·���ͻ��Ŀ���ļ�·������cmd����
*/
class Nasm
{
public:
	Nasm();
	Nasm(std::string, std::string);
	~Nasm();
	void w_bat();
	void setNasmPath(std::string);
	void setTargetFilePath(std::string);
	std::string get_bat();
	std::string getNasmPath();
	std::string getTargetFilePath();
private:
	std::string nasmPath, targetFilePath;
	//����·��+����·��
	std::string toCmd(std::string, std::string);
	//ȥ���ļ���׺
	std::string withoutSuffix(std::string);
};
