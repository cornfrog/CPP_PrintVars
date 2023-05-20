all:
	@g++ printvars.cpp -o print
	@./print

clean:
	@rm print
	@echo "print.exe removed"