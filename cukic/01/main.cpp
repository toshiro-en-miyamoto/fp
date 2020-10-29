#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

int count_lines(const std::string& filename) {
    std::ifstream in(filename);
    return std::count(
        std::istreambuf_iterator<char>(in),
        std::istreambuf_iterator<char>(),
        '\n'
    );
}

std::vector<int>
count_lines_in_files(const std::vector<std::string>& files) {
    std::vector<int> results(files.size());
    std::transform(
        files.begin(),
        files.end(),
        results.begin(),
        count_lines
        );
    return results;
}

std::vector<int>
count_lines_in_files2(const std::vector<std::string>& files) {
    std::vector<int> results;
    for (const auto& file : files) {
        results.push_back(count_lines(file));
    }
    return results;
}

std::vector<int>
count_lines_in_files1(const std::vector<std::string>& files) {
    std::vector<int> results;
    char c = 0;
    for (const auto& file : files) {
        int line_count = 0;
        std::ifstream in(file);
        while (in.get(c)) {
            if (c == '\n') {
                line_count++;
            }
        }
        results.push_back(line_count);
    }
    return results;
}

int main() {
    auto results = count_lines_in_files({"main.cpp"});
    for (const auto &result: results) {
        std::cout << result << std::endl;
    }
}