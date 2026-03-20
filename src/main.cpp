// main.cpp
// Copyright 2026 Sylvia Leaf

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "include/file_load.h"
#include "include/count_words.h"

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << argv[0] << ": no filename specified" << std::endl;
        return EXIT_FAILURE;
    } else {
        for (int i = 1; i < argc; i++) {
            std::string argv_value = argv[i];
            std::uint64_t word_count = 0;
            try {
                word_count = MyWordCount::WordCount(
                    MyWordCount::LoadFile(argv_value));
                std::cout << "Word count for file " << argv_value << ": "
                    << word_count << std::endl;
            } catch (std::runtime_error& e) {
                std::cerr << "Couldn't open file " << argv_value << ": "
                    << e.what() << std::endl;
            }
        }
    }
    return EXIT_SUCCESS;
}
