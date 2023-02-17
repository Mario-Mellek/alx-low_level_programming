#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * syscall(...) puts its arguments in
 * the right registers for the system call,
 * then performs the system call with the
 * syscall assembly instruction.i
 * reference: https://jameshfisher.com/2018/02/19/how-to-syscall-in-c/
 *
 * Return: returns 1
 */

int main(void)
{
const char msg[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
syscall(SYS_write, 1, msg, sizeof(msg));
return (1);
}
