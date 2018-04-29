#include"head.h"
int main() {
	Path *path = new Path();
	Nasm *nasm = new Nasm(path->getNasmPath(), path->getTargetPath());
	nasm->runBat();	
	std::string file = nasm->withoutSuffix(nasm->getTargetFilePath());
	file += "bat";
	remove(file.c_str());
	return 0;
}