#
# Makefile for POSIX wrapper
#

ROOTDIR = ../
#include $(ROOTDIR)/Rules.make
TOOL_PREFIX = 
SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS = $(patsubst %.c, %.o, $(SOURCES))

#TOOL_PREFIX = arm-wrs-linux-gnueabi-armv5tel-uclibc_small-

CC = $(TOOL_PREFIX)gcc
AR = $(TOOL_PREFIX)ar
RANLIB = $(TOOL_PREFIX)ranlib
STRIP 	= $(TOOL_PREFIX)strip

#CFLAG += -DHI_379X

#CPP_INCLUDE_PATH  = -I$(APP_INC_DIR) -I$(DADSP_INC_DIR) -I$(PLATFORM_INC_DIR)	#主要用于包含unihardwareif.h头文件
CFLAGS = $(CFLAG) $(CPP_INCLUDE_PATH) -D_REENTRANT -O2 -Wall -D_GNU_SOURCE 


LIB = lib_pe.a

all : $(LIB) 

$(LIB) : $(OBJS)
	$(AR) r $@ $(OBJS)
	$(RANLIB) $@
	#cp $@ $(IPC_LIB_DIR)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	-rm -f *.o $(LIB)

