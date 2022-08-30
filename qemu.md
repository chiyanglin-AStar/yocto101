#  Qemu x86_64

qemu-system-x86_64 -M pc -kernel bzImage -nographic -hda core-image-minimal-genericx86.ext4 -netdev user,id=network0 -device e1000,netdev=network0 -nographic -append "root=/dev/sda console=ttyS0" 

#  Qemu ARM64 Example

qemu-system-aarch64 -M virt \
-cpu cortex-a53 \
-nographic -smp 1 \
-kernel output/images/Image \
-append "root=/dev/vda console=ttyAMA0" \
-netdev user,id=eth0 -device virtio-net-device,netdev=eth0 \
-drive file=output/images/rootfs.ext4,if=none,format=raw,id=hd0 \
-device virtio-blk-device,drive=hd0 \
-fsdev local,security_model=passthrough,id=fsdev0,path=/tmp \
-device virtio-9p-pci,id=fs0,fsdev=fsdev0,mount_tag=host_mount
