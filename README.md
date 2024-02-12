# Cpp modules example with cmake

This repo contains the example for using the cpp modules along with cmake

# Requirements
You WILL need very recent programs.

- cmake ^>= 3.28
- clang-17 | gcc-14 | (sorry, you're gonna have to find the MSVC version yourself)
- ninja ^>= 1.11.1

At the time of the creation of this repo, these are the MOST RECENT VERSIONS of `cmake` and `ninja`.
This is a very recent thing, but modules are very good.


## Installing requirements on Ubuntu

Here's the links with guides on how to install the requirements on ubuntu:

### Cmake
Keep in mind, [Kitware](https://www.kitware.com/open-source/) are the guys that made cmake, so their ppas are fine
https://askubuntu.com/questions/355565/how-do-i-install-the-latest-version-of-cmake-from-the-command-line

### Clang 17
Just do the things in `llvm.sh`
https://ubuntuhandbook.org/index.php/2023/09/how-to-install-clang-17-or-16-in-ubuntu-22-04-20-04/
Also, do
```bash
sudo apt install clang-tools-17
```
This install `/usr/lib/llvm-17/bin/clang-scan-deps`, which is used for modlues

### Newest ninja
https://lindevs.com/install-ninja-build-system-on-ubuntu/

# Compiling

To compile this, you'll need to specify the compiler and generator, so

```bash
mkdir -p build
cd build
cmake -DCMAKE_CXX_COMPILER=clang++-17 -G Ninja ..
cmake --build .
./demo
```
