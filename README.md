CIE Delta E 2000 (CIEDE2000)
----------------------------

A C++ library containing a function to determine how similar two colors are.
The code here is original, based on the psuedocode written in the paper
[The CIEDE2000 Color-Difference Formula: Implementation Notes, Supplementary
Test Data, and Mathematical Observations](http://www.ece.rochester.edu/
~gsharma/ciede2000/), by Gaurav Sharma, Wencheng Wu, and Edul N. Dalal. While
this is written in C++ so that I could place it in a namespace, there's nothing
C++-specific about the implementation, and so it would be trivial to convert
to C if required. The conversion is left as an exercise to the reader.

**To Build**
`make`

**To Test**
`make test && ./testCIEDE2000` (Expected output below.)

As I implemented the method from the paper, I commented the code to line up
code fragements with lines from the paper for tracability. There are ways to
speed up and optimize this algorithm, which have not been attempted.

A test program (`testCIEDE2000`) is built by default to run the
[tests](http://www.ece.rochester.edu/~gsharma/ciede2000/dataNprograms/
CIEDE2000.xls) perscribed by the algorithm authors. Tested on OS X 10.10.2,
and Ubuntu 14.04 LTS. Should work on Cygwin/MINGW, though there will likely
need to be edits to the [Makefile](Makefile).

**NOTE**
The `CIEDE2000` algorithm uses colors from the 
[LAB colorspace](http://en.wikipedia.org/wiki/Lab_color_space), not RGB. In
practice, I've used [ImageMagick](http://www.imagemagick.org) to convert 
color values for use with CIEDE2000, though that not may be entirely correct.

**Expected Testing Output**

	$ ./testCIEDE2000 
	1: 2.0425 vs 2.0425	PASS 
	2: 2.8615 vs 2.8615	PASS 
	3: 3.4412 vs 3.4412	PASS 
	4: 1.0000 vs 1.0000	PASS 
	5: 1.0000 vs 1.0000	PASS 
	6: 1.0000 vs 1.0000	PASS 
	7: 2.3669 vs 2.3669	PASS 
	8: 2.3669 vs 2.3669	PASS 
	9: 7.1792 vs 7.1792	PASS 
	10: 7.1792 vs 7.1792	PASS 
	11: 7.2195 vs 7.2195	PASS 
	12: 7.2195 vs 7.2195	PASS 
	13: 4.8045 vs 4.8045	PASS 
	14: 4.8045 vs 4.8045	PASS 
	15: 4.7461 vs 4.7461	PASS 
	16: 4.3065 vs 4.3065	PASS 
	17: 27.1492 vs 27.1492	PASS 
	18: 22.8977 vs 22.8977	PASS 
	19: 31.9030 vs 31.9030	PASS 
	20: 19.4535 vs 19.4535	PASS 
	21: 1.0000 vs 1.0000	PASS 
	22: 1.0000 vs 1.0000	PASS 
	23: 1.0000 vs 1.0000	PASS 
	24: 1.0000 vs 1.0000	PASS 
	25: 1.2644 vs 1.2644	PASS 
	26: 1.2630 vs 1.2630	PASS 
	27: 1.8731 vs 1.8731	PASS 
	28: 1.8645 vs 1.8645	PASS 
	29: 2.0373 vs 2.0373	PASS 
	30: 1.4146 vs 1.4146	PASS 
	31: 1.4441 vs 1.4441	PASS 
	32: 1.5381 vs 1.5381	PASS 
	33: 0.6377 vs 0.6377	PASS 
	34: 0.9082 vs 0.9082	PASS
