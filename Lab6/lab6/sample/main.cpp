#include <iostream>
#include <fstream>
#include "../texts/ttext.cpp"
#include "../texts/ttextlink.cpp"

using namespace std;

int main() {
	TText text;
	char fileName[] = "D:\\Projects\\C++\\Lab6\\lab6\\sample\\sample.txt";
	
	text.Read(fileName);
	text.Print();

	return 0;
}