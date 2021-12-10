all:
	@g++ -std=c++11 test.cpp -o studentOutput

	@if [ -f studentOutput.exe ]; then (cat input.txt; echo " "; cat expectedOutput.txt) | studentOutput.exe; fi
	@if [ -f studentOutput ]; then (cat input.txt; echo " "; cat expectedOutput.txt) | ./studentOutput; fi	

clean:
	@if [ -f studentOutput.exe ]; then rm studentOutput.exe; fi
	@if [ -f studentOutput ]; then rm studentOutput; fi
	@if [ -f studentOutputFile.txt ]; then rm studentOutputFile.txt; fi
	

