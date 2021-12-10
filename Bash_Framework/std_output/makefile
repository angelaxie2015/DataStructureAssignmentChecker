all:
	@g++ -std=c++11 test.cpp -o studentOutput

	@if [ -f studentOutput.exe ]; then studentOutput.exe > studentOutputFile.txt; fi
	@if [ -f studentOutput ]; then ./studentOutput > studentOutputFile.txt; fi	

	@echo "expected output:"
	@if diff -b expectedOutput.txt studentOutputFile.txt | grep "<"; then echo "actual output:"; else echo "Correct output"; fi
	@if diff -b expectedOutput.txt studentOutputFile.txt | grep ">"; then echo ""; fi;

clean:
	@if [ -f studentOutput.exe ]; then rm studentOutput.exe; fi
	@if [ -f studentOutput ]; then rm studentOutput; fi
	@if [ -f studentOutputFile.txt ]; then rm studentOutputFile.txt; fi
	

