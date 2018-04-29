#include"Nasm.h"
int main() {
	Nasm *nasm = new Nasm();
	std::cout << "输入nasm.exe的绝对路径" << std::endl;
	std::string nasmPath;
	std::cin >> nasmPath;
	nasm->setNasmPath(nasmPath);
	std::cout << "输入汇编文件的绝对路径" << std::endl;
	std::string targetPath;
	std::cin >> targetPath;
	nasm->setTargetFilePath(targetPath);
	nasm->w_bat();	
	system(nasm->get_bat().c_str());
	return 0;
}