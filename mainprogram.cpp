#include <iostream>
#include <string>
#include "HuffmanCode.h"
#include "HuffmanNode.h"
#include "BinaryHeap.h"
using namespace std;

int main(){
	HuffmanCode* test = new HuffmanCode("this is an example of a huffman tree");
	test->displayTable();
	test->displayHuffmanTable();
	string code = test->getEncodedString();
	cout << "Encoded string: " << code << endl;
	cout << "Decoded string: " << test->decodeString(code) << endl;
	delete test;
	cin.get();
	return 0;
}
