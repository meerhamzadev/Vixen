#include "v8.h"

#include "./src/vixen.hpp"

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    auto *vixen = new Vixen();
    std::unique_ptr<v8::Platform> platform =
        vixen->initializeV8(argc, argv);

    vixen->initializeVM();
    vixen->InitializeProgram(filename);
    vixen->Shutdown();

    return 0;
}