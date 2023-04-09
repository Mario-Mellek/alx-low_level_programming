# Learning Objectives
## General

- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

- hint:
`index <= sizeof(unsigned long int) * CHAR_BIT -1` is a condition that checks whether the index is within the range of valid bit positions for an unsigned long int variable.

`sizeof(unsigned long int)` returns the size of an unsigned long int variable in bytes, and `CHAR_BIT` returns the number of bits in a byte (usually 8). So `sizeof(unsigned long int) * CHAR_BIT` gives you the total number of bits in an unsigned long int variable.

- https://www.gnu.org/software/libc/manual/html_node/Width-of-Type.html
