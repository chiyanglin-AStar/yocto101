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

##  git clone Intel layer 

git clone https://git.yoctoproject.org/meta-intel -b dunfell

git clone https://git.yoctoproject.org/meta-intel -b kirkstone

git clone https://git.yoctoproject.org/meta-intel -b master

##  start yocto build 
source oe-init-build-env

nano ./conf/local.conf 

###  modify machine 

MACHINE ??= "qemux86-64"  ==>

MACHINE ??= "generic86"
