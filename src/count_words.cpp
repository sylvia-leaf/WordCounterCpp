// count_words.cpp
// Copyright 2026 Sylvia Leaf

#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

namespace MyWordCount {
std::uint64_t WordCountInternal(std::string string_to_count) {
    std::uint64_t word_count = 0;
    while (!string_to_count.empty()) {
        std::uint64_t space_pos = string_to_count.find(" ") + 1;
        string_to_count.erase(0, space_pos);
        word_count++;
    }
    return word_count;
}
std::uint64_t WordCount(const std::string& string_to_count) {
    return WordCountInternal(string_to_count + " ");
}
std::uint64_t WordCount(const std::vector<std::string>& vector_to_count) {
    std::uint64_t word_count = 0;
    for (auto vector_line : vector_to_count) {
        word_count += WordCountInternal(vector_line + " ");
    }
    return word_count;
}
}  // namespace MyWordCount
