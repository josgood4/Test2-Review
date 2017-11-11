.intel_syntax noprefix
.text
.global fib

fib:
mov edx, [esp+0x8]
mov eax, edx
ret


