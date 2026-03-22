// file_load.cpp
// Copyright 2026 Sylvia Leaf

#include <fstream>
#include <string>
#include <vector>
#include <cerrno>
#include <cstring>

namespace MyWordCount {
auto LoadFile(std::string& file_name) {
    std::ifstream my_file(file_name);
    if (my_file.is_open() == false) {
        throw std::runtime_error(std::strerror(ENOENT));
    }
    std::string file_line;
    std::vector<std::string> file_vector;
    while (std::getline(my_file, file_line)) {
        file_vector.push_back(file_line);
    }
    return file_vector;
}
}  // namespace MyWordCount
