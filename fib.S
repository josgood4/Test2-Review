.intel_syntax noprefix
.text
.global fib

fib:
mov edx, [esp+0x4]
mov eax, edx
ret


