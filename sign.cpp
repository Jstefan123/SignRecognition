
#include "sign.h"

//reserves the sign of each vector
Sign::Sign() {
	redPix.reserve(256);
	greenPix.reserve(256);
	bluePixPix.reserve(256);
}

//reads in the red pixel of an imgae
void Sign::readInRedPixels(std::ifstream &read, std::string &fileName) {

	int value;

	//while there is input to read in
	while (read >> value) {
		redPix.push_back(value);
	}
}

//reads in the red pixel of an imgae
void Sign::readInBluePixels(std::ifstream &read, std::string &fileName) {

	int value;

	//while there is input to read in
	while (read >> value) {
		bluePix.push_back(value);
	}
}

//reads in the green pixel of an imgae
void Sign::readInGreenPixels(std::ifstream &read, std::string &fileName) {

	int value;

	//while there is input to read in
	while (read >> value) {
		greenPix.push_back(value);
	}
}

void Sign::readInImagePixels(std::string &redFile, std::string &blueFile, std::string &greenFile) {

	//ifstream to read in image
	std::ifstream read;
	read.open(fileName);

	//load up each of the pixel vectors
	readInRedPixels(read, redFile);
	readInGreenPixels(read, greenFile);
	readInBluePixels(read, blueFile);

	read.close();
}

//returns the discrepancy betwen the pixel matrices from projecting the vectors
//of query onto the corresponding vectors in this sign
double Sign::getError(Sign &query) {

}