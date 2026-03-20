# Word Counter in C++

### Information

I'm just learning C++, so this code isn't the best. It might not even be right, because we're counting anything surrounded by spaces as a "word." 

This was written to learn about C++ features, so while there is likely a more elegant way to achieve this, this is here to demonstrate certain features. I could probably use memory better, for example. I might revisit this later.

There will probably be more random C++ projects here because I want to learn how to use each feature and also learn how to write good C++.

### C++ features used

I used.
- `std::string`
- `std::vector`
- I/O streams including `iostream` and `ifstream`
- Exceptions
- Type inference with `auto`

### How to build

Navigate to the `src` directory and type `make build` or `make clean-build`.

Requires a C++14 or later compiler. If on a compiler that does not support C++20, modify the flags in the Makefile. 

Only tested on macOS for now. Might work on other platforms.

### License

This is licensed under the MIT license.