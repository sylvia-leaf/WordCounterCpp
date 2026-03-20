// count_words.h
// Copyright 2026 Sylvia Leaf

#include <string>
#include <vector>
#include <cstdint>

#pragma once

namespace MyWordCount {
std::uint64_t WordCount(const std::string&);
std::uint64_t WordCount(const std::vector<std::string>&);
}
