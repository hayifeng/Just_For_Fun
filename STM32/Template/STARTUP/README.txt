该目录下的文件为stm32的启动文件。创建工程的时候根据对应芯片选择一个文件有即可。
小容量：FLASH <= 32kb                 ld.s
中容量：64kb <= FLASH <= 128kb        md.s
大容量：256kb <= FLASH                hd.s
e.g:stm32f103ze、stm32f103rc都属于大容量
