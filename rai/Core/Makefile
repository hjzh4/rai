BASE   = ../..
NAME   = $(shell basename `pwd`)
OUTPUT = lib$(NAME).so

#OPTIM = fast_debug

DEPEND_UBUNTU += g++ realpath gnuplot
DEPEND_UBUNTU += liblapack-dev libf2c2-dev libjsoncpp-dev libeigen3-dev

X11 = 1
LAPACK = 1
PTHREAD = 1
ROS = 1
JSON = 1
CXXFLAGS += -DRAI_CORE_PATH=\"`pwd`\"

SRCS = $(shell find . -maxdepth 1 -name '*.cpp' )
OBJS = $(SRCS:%.cpp=%.o)

include $(BASE)/build/generic.mk
