all:
	@g++ -std=c++11 test.cpp -o testCase	
	@if [ -f testCase.exe ]; then testCase.exe; fi
	@if [ -f testCase ]; then ./testCase; fi	

clean:
	@[ -f testCase.exe ] && rm testCase.exe 
	@[ -f testCase ] && rm testCase