# Cpp modules example with cmake

This repo contains the example for using the cpp modules along with cmake

# Requirements
You WILL need very recent programs.

- cmake ^>= 3.28
- clang-17 | gcc-14 | (sorry, you're gonna have to find the MSVC version yourself)
- ninja ^>= 1.11.1

At the time of the creation of this repo, these are the MOST RECENT VERSIONS of `cmake` and `ninja`.
This is a very recent thing, but modules are very good.

# Compiling

To compile this, you'll need to specify the compiler and generator, so

```bash
mkdir -p build
cd build
cmake -DCMAKE_CXX_COMPILER=clang++-17 -G Ninja ..
cmake --build .
./demo
```
