CC=clang
CFLAGS=-O3 -Wall -Wextra -Werror
LD=lld
LDFLAGS=-s
RM=rm -f

TARGET=cy

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -fuse-ld=$(LD) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
