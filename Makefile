all:  
	for f in $$(ls ./src | grep .c); do echo $$f; cc ./src/$$f -o ./build/cmath-$$(echo $$f | rev | cut -c 3- | rev) -lm; done

install:
	for f in $$(ls ./src | grep .c); do echo $$f; install -m 751 ./build/cmath-$$(echo $$f | rev | cut -c 3- | rev) /usr/local/bin/; done

uninstall:
	for f in $$(ls ./src | grep .c); do rm -rf /usr/local/bin/cmath-*; done

