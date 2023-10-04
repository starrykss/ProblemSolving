#include <vector>

long long sum(std::vector<int> &a) {
    long long hap;

    hap = 0;
    for (int i = 0; i < a.size(); i++) {
        hap += a[i];
    }

    return hap;
}