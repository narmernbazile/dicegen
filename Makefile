##
# Project Title
#
# @file
# @version 0.1

CC = gcc
CFLAGS = -Wall

TARGET = dicegen

all: $(TARGET)

$(TARGET): $(TARGET).c $(TARGET).h
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(TARGET).h

clean:
	$(RM) $(TARGET)
# end
