section .data
msg: DB 'Hello, World,'
msgSize EQU $ -msg

global start

section .txt
