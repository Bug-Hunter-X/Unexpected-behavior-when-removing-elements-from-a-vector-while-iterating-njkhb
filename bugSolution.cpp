std::vector<int> vec = {1, 2, 3, 4, 5};

// Correct way 1: Iterate backward
for (int i = vec.size() - 1; i >= 0; --i) {
  vec.erase(vec.begin() + i);
}

// Correct way 2: Use iterator
for (auto it = vec.begin(); it != vec.end(); ) {
  if (/*condition to remove*/) {
    it = vec.erase(it);
  } else {
    ++it;
  }
}

// Correct way 3: Use std::remove and erase
vec.erase(std::remove_if(vec.begin(), vec.end(), [](int x){return x % 2 == 0;}), vec.end());

// Now vec will be empty (or as expected in other cases) 