all: fib.c fib.S
	gcc fib.c fib.S -m32 -std=c89 -o fib -g

denorm: denorm.c
	gcc -g denorm.c -o denorm -m32 -lm

.PHONY: clean
clean:
	rm -f denorm
	rm -fv fib
