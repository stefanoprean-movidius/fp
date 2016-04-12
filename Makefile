CXXFLAGS =	-O2 -g -Wall -std=c++11 -fmessage-length=0

OBJS =		half_precision.o

LIBS =

TARGET =	half_precision

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
