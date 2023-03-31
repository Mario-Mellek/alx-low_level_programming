## 101-hello_holberton.asm explanation:

- The `.data section` defines a string called `text` that contains the message
`“Hello, Holberton”` followed by a newline character (0x0a).

- The `.text section` defines the main function (entry point of the program)
and calls the printf function to print the text string to the console.

- The program then exits with a status code of 0.

- The `extern printf` directive tells the assembler that printf
is defined in another file (in this case, the C standard library).

- The push rbp and mov rbp, rsp instructions set up a stack frame for the function.

- The mov edi, text instruction moves the address of the text string into the edi register.

- The xor eax, eax instruction clears the eax register (which is used to pass arguments to functions).

- The call printf instruction calls the printf function with the address of the text string as its argument.

- The xor edi, edi, mov eax, 60, and syscall instructions exit the program with a status code of 0.
