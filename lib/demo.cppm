module;

#include <iostream>

export module DemoModule;

int private_func() { return 78; }

export void printMessage() {
    std::cout << "Hello! The value from private func is" << private_func()
              << std::endl;
}

export namespace tmp {
void printOther() { std::cout << "other" << std::endl; }
} // namespace tmp
