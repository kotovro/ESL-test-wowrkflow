BUILDDIR ?= build
SRCS = $(wildcard src/*.c)
OBJS := $(SRCS:.c=.o)
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

runtests: ${OBJS} 
	gcc -o $@ $^

$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc -c $^ -o $@

clean:
	rm -rf ${BUILDDIR} runtests