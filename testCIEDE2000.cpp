/*
 * testCIEDE2000.cpp
 * Part of http://github.com/gfiumara/CIEDE2000 by Gregory Fiumara.
 * See LICENSE for details.
 */
 
#include <iostream>
#include <string>
#include <vector>

#include <CIEDE2000.h>

/** 
 * @brief
 * Run the test dataset run from the CIEDE2000 paper.
 *
 * @return
 * EXIT_SUCCESS if all tests pass, EXIT_FAILURE otherwise.
 */
int
testCIEDE2000();

int
main(
    int argc,
    char *argv[])
{
	return (testCIEDE2000());
}

int
testCIEDE2000()
{
	CIEDE2000::LAB lab1, lab2;
	double expectedResult, myResult;
	unsigned int line = 1;
	char myBuffer[64], expectedBuffer[64];
	std::string myStr, expectedStr;
	std::vector<bool> passFail;
	
	lab1 = {50.0000, 2.6772, -79.7751};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 2.0425;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 3.1571, -77.2803};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 2.8615;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.8361, -74.0200};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 3.4412;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -1.3802, -84.2814};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -1.1848, -84.8006};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -0.9009, -85.5211};
	lab2 = {50.0000, 0.0000, -82.7485};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 0.0000, 0.0000};
	lab2 = {50.0000, -1.0000, 2.0000};
	expectedResult = 2.3669;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -1.0000, 2.0000};
	lab2 = {50.0000, 0.0000, 0.0000};
	expectedResult = 2.3669;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.4900, -0.0010};
	lab2 = {50.0000, -2.4900, 0.0009};
	expectedResult = 7.1792;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.4900, -0.0010};
	lab2 = {50.0000, -2.4900, 0.0010};
	expectedResult = 7.1792;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.4900, -0.0010};
	lab2 = {50.0000, -2.4900, 0.0011};
	expectedResult = 7.2195;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.4900, -0.0010};
	lab2 = {50.0000, -2.4900, 0.0012};
	expectedResult = 7.2195;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -0.0010, 2.4900};
	lab2 = {50.0000, 0.0009, -2.4900};
	expectedResult = 4.8045;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -0.0010, 2.4900};
	lab2 = {50.0000, 0.0010, -2.4900};
	expectedResult = 4.8045;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, -0.0010, 2.4900};
	lab2 = {50.0000, 0.0011, -2.4900};
	expectedResult = 4.7461;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {50.0000, 0.0000, -2.5000};
	expectedResult = 4.3065;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {73.0000, 25.0000, -18.0000};
	expectedResult = 27.1492;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {61.0000, -5.0000, 29.0000};
	expectedResult = 22.8977;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {56.0000, -27.0000, -3.0000};
	expectedResult = 31.9030;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {58.0000, 24.0000, 15.0000};
	expectedResult = 19.4535;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {50.0000, 3.1736, 0.5854};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {50.0000, 3.2972, 0.0000};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {50.0000, 1.8634, 0.5757};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {50.0000, 2.5000, 0.0000};
	lab2 = {50.0000, 3.2592, 0.3350};
	expectedResult = 1.0000;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {60.2574, -34.0099, 36.2677};
	lab2 = {60.4626, -34.1751, 39.4387};
	expectedResult = 1.2644;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {63.0109, -31.0961, -5.8663};
	lab2 = {62.8187, -29.7946, -4.0864};
	expectedResult = 1.2630;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {61.2901, 3.7196, -5.3901};
	lab2 = {61.4292, 2.2480, -4.9620};
	expectedResult = 1.8731;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {35.0831, -44.1164, 3.7933};
	lab2 = {35.0232, -40.0716, 1.5901};
	expectedResult = 1.8645;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {22.7233, 20.0904, -46.6940};
	lab2 = {23.0331, 14.9730, -42.5619};
	expectedResult = 2.0373;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {36.4612, 47.8580, 18.3852};
	lab2 = {36.2715, 50.5065, 21.2231};
	expectedResult = 1.4146;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {90.8027, -2.0831, 1.4410};
	lab2 = {91.1528, -1.6435, 0.0447};
	expectedResult = 1.4441;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {90.9257, -0.5406, -0.9208};
	lab2 = {88.6381, -0.8985, -0.7239};
	expectedResult = 1.5381;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {6.7747, -0.2908, -2.4247};
	lab2 = {5.8714, -0.0985, -2.2286};
	expectedResult = 0.6377;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	lab1 = {2.0776, 0.0795, -1.1350};
	lab2 = {0.9033, -0.0636, -0.5514};
	expectedResult = 0.9082;
	sprintf(expectedBuffer, "%.4f", expectedResult);
	expectedStr = expectedBuffer;
	myResult = CIEDE2000::CIEDE2000(lab1, lab2);
	sprintf(myBuffer, "%.4f", myResult);
	myStr = myBuffer;
	std::cout << line << ": ";
	std::cout << myStr << " vs " << expectedStr << '\t';
	passFail.push_back(myStr == expectedStr);
	std::cout << (passFail[line - 1] ? "PASS" : "FAIL") << ' ';
	std::cout << std::endl;
	line++;
	
	std::cout << std::endl;
	int ret = EXIT_SUCCESS;
	for (unsigned int i = 0; i < passFail.size(); i++) {
		if (!passFail[i]) {
			std::cout << "Test failed on line " <<
			    std::to_string(i + 1) << std::endl;
			ret = EXIT_FAILURE;
		}
	}
	
	return (ret);
}

