star:piano.cpp piano.h start.cpp
	@g++ -o star start.cpp piano.cpp -lwiringPi > /dev/null && echo "build completed. file 'star' generated."
clean:
	@rm -rf star && echo "clean completed."
