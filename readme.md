#  This is CodingCoffee Yocto 101 Tutorial

##  in ubuntu environment , the list of packages that need to be installed :

sudo apt update && sudo apt-get -y install libsdl1.2-dev xterm sed cvs subversion coreutils texi2html docbook-utils python-pysqlite2 help2man make gcc g++ desktop-file-utils libgl1-mesa-dev libglu1-mesa-dev mercurial autoconf automake groff curl lzop asciidoc u-boot-tools gawk wget git-core diffstat unzip texinfo gcc-multilib build-essential chrpath socat cpio python python3 python3-pip python3-pexpect xz-utils debianutils iputils-ping liblz4-tool zstd


##  git clone poky

git clone git://git.yoctoproject.org/poky -b dunfell

git clone git://git.yoctoproject.org/poky -b kirkstone

git clone git://git.yoctoproject.org/poky -b master


## git clone openembedded 

cd poky 

git clone https://git.openembedded.org/meta-openembedded -b dunfell

git clone https://git.openembedded.org/meta-openembedded -b kirkstone

git clone https://git.openembedded.org/meta-openembedded -b master


##  start yocto build , build qemux86-64
source oe-init-build-env

bitbake core-image-minimal   

##  run image 
runqemu tmp/deploy/images/qemux86-64/bzImage-qemux86-64.bin tmp/deploy/images/qemux86-64/core-image-minimal-qemux86-64.ext4

or 

runqemu qemux86-64 nographic

###  modify machine and start build but not recomment in gitpod , gitpod free version have time limit 

nano ./conf/local.conf 

MACHINE ??= "qemux86-64"  ==>

MACHINE ??= "generic86"

####  use qemu to test image 

qemu-system-x86_64 -boot d -cdrom ./tmp/deploy/images/genericx86-64/core-image-minimal-genericx86-64.iso -m 512 -nographic

##  git clone Intel layer 

git clone https://git.yoctoproject.org/meta-intel -b dunfell

git clone https://git.yoctoproject.org/meta-intel -b kirkstone

git clone https://git.yoctoproject.org/meta-intel -b master

###  modify machine and start build but not recomment in gitpod , gitpod free version have time limit 

MACHINE ??= "qemux86-64"  ==>

MACHINE ??= "intel-core2-32"

bitbake core-image-minimal

##  git clone raspberry pi layer 

git clone https://git.yoctoproject.org/meta-raspberrypi -b dunfell

git clone https://git.yoctoproject.org/meta-raspberrypi -b kirkstone

git clone https://git.yoctoproject.org/meta-raspberrypi -b master

###  add intel layer and modify machine and start build but not recomment in gitpod , gitpod free version have time limit 

nano ./conf/bblayer.conf 

BBLAYERS ?= " \
  ${TOPDIR}/../sources/poky/meta \
  ${TOPDIR}/../sources/poky/meta-poky \
  ${TOPDIR}/../sources/poky/meta-yocto-bsp \
  ${TOPDIR}/../sources/meta-raspberrypi \
  ${TOPDIR}/../sources/meta-openembedded/meta-oe \
  ${TOPDIR}/../sources/meta-openembedded/meta-multimedia \
  ${TOPDIR}/../sources/meta-openembedded/meta-networking \
  ${TOPDIR}/../sources/meta-openembedded/meta-python \
  "

nano ./conf/local.conf 

MACHINE ??= "qemux86-64"  ==>

MACHINE ??= "raspberrypi4"

bitbake core-image-base

