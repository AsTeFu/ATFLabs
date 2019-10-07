all: clean reload build exec

run: reload build exec

mkdir_build:
	[ -d ./cmake-build-debug ] | mkdir -p cmake-build-debug

build:
	cd cmake-build-debug;cmake --build . --target Laba1

exec:
	./cmake-build-debug/Laba1

clean:
	rm -rf cmake-build-debug

reload: mkdir_build
	cd cmake-build-debug;cmake $(FLAGS) ..