all: fib.c fib.S
	gcc fib.c fib.S -m32 -std=c89 -o fib

clean:
	rm -fv fib
