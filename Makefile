##
# Project Title
#
# @file
# @version 0.1

CC = gcc
CFLAGS = -Wall

SRC_DIR = src
TARGET = dicegen

all: $(TARGET)

$(TARGET): $(SRC_DIR)/$(TARGET).c $(SRC_DIR)/$(TARGET).h
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_DIR)/$(TARGET).c

clean:
	$(RM) $(TARGET)
# end
