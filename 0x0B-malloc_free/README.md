#@ Author Gitau Muguro
This directory has files dealing with malloc & free.
Malloc is a c standard library functions that is used to allocate a certain
amount of memory during the execution of a program. It will request a block of 
memory from heap. if the requested is granted, the operating system will reserve 
the requested amount of memory and malloc will return a ointe to the reseved space

When the amount of memory is not needed anymore, you must return it to the operating
system by calling the function free.
