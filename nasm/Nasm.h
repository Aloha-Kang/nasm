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
	//����·��+����·��
	std::string toCmd(std::string, std::string);	
};
