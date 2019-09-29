
# macro

# build tools
CC := gcc
CFLAGS :=
LDFLAGS :=

# target
TARGET := main

# 获取.c文件
srcfiles=$(wildcard *.c)
# 使用替换函数获取.o文件
objfiles=$(patsubst %.c,%.o,$(srcfiles))


#################################################################################
# 生成的可执行文件
all:$(TARGET)

# 目标文件依赖于.o文件
$(TARGET):$(objfiles)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(objfiles)

# .o文件依赖于.c文件
%.o:%.c
	$(CC) -c $<

.PHONY:clean all

clean:
	rm -f *.o
	rm -f $(TARGET)
