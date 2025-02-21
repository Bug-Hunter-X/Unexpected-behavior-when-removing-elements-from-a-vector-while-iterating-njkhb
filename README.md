# Unexpected Vector Behavior in C++

This repository demonstrates a common error when working with `std::vector` in C++.  The `bug.cpp` file contains code that attempts to remove elements from a vector while iterating using an index. This leads to unexpected results because the `erase` method modifies the vector's size and shifts elements, invalidating the index used in the loop.

The `bugSolution.cpp` file provides a corrected version, showcasing safe ways to remove elements from a vector while iterating.