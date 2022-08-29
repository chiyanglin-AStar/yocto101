#  check gcc and gdb in gitpod 
gcc -v 
gdb -v 

#   install qemu-system-arm qemu-system-x86
sudo apt install qemu 

nano hello.c 

### hello.c 
#include <stdio.h>
int main()
{
    printf("hello world!");
    printf("hello world!");
    printf("hello world!");
    printf("hello world!");
    fflush(stdout);
    while(1);
    return 0;
}
### ---------------------------------

touch hello.c

sudo apt install cpio qemu-system qemu-system-i386

gcc --static -o helloworld hello.c

echo helloworld | cpio -o --format=newc > rootfs

qemu-system-x86_64 -kernel ./arch/x86/boot/bzImage -initrd ./rootfs -append "root=/dev/ram rdinit=/helloworld" -smp 2  -s -S -nographic

