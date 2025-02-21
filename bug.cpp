std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

//Expected vec to be empty, but it's not.