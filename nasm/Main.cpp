#include"Nasm.h"
int main() {
	Nasm *nasm = new Nasm();
	std::cout << "����nasm.exe�ľ���·��" << std::endl;
	std::string nasmPath;
	std::cin >> nasmPath;
	nasm->setNasmPath(nasmPath);
	std::cout << "�������ļ��ľ���·��" << std::endl;
	std::string targetPath;
	std::cin >> targetPath;
	nasm->setTargetFilePath(targetPath);
	nasm->w_bat();	
	system(nasm->get_bat().c_str());
	return 0;
}