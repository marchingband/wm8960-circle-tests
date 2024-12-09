#
# Makefile
#

# USE_I2S_SOUND_IRQ = 1

CIRCLEHOME = ../..

OBJS = $(patsubst %.c, %.o, $(wildcard *.c)) $(patsubst %.cpp, %.o, $(wildcard *.cpp))

# CFLAGS += -DUSE_I2S_SOUND_IRQ=$(USE_I2S_SOUND_IRQ)

LIBS	= $(CIRCLEHOME)/lib/sound/libsound.a \
		$(CIRCLEHOME)/lib/libcircle.a

include $(CIRCLEHOME)/Rules.mk


-include $(DEPS)