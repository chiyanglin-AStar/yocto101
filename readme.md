#  This is CodingCoffee Yocto 101 Tutorial

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
