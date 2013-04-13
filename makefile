LaneDrift : cam3.cpp linefinder.h edgedetector.h
	g++ -o LaneDrift cam3.cpp `pkg-config opencv --cflags --libs`

.PHONY: clean
clean:
	rm LaneDrift

