#include <iostream>
#include <algorithm>
#include <string>

template <typename T> void insertion_sort(T arr[], int sz) {
    int i, j;

    for (i = 1; i < sz; ++i) {
        j = i;
        while((j> 0) && (arr[j] < arr[j-1])) {
            std::swap(arr[j], arr[j-1]);
            j = j-1;
        }
    }

}

auto main(int argc, const char *[]) -> int {

    int i_arr[40] {5,4,3,2,1,11,12,9,8,6,7,10,13,15,20,19,18,17,14,16};
    std::string s_arr[10] {"He", "Him", "She", "Her", "It"};
    char c_arr[26] {'a', 'z', 'b', 'e', 'u', 'c', 'y', 'g', 'd', 't', 'o', 'f', 'h', 'i', 'j', 'x', 'w', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 'v'};

    insertion_sort(i_arr, 40);
    insertion_sort(s_arr, 10);
    insertion_sort(c_arr, 26);

    for (auto e : i_arr) {
        std::cout << e << " ";
    }
    std::cout << "\n";
    for (auto e : s_arr) {
        std::cout << e << " ";
    }
    std::cout << "\n";
    for (auto e : c_arr) {
        std::cout << e << ' ';
    }

}
