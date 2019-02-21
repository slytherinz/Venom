#include <string>
#include <iostream>
#include <sys/time.h>
#include <sstream>
/**
 * 当前时间秒数
 * @return
 */
long long GetCurrentTime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec;
}

/**
 * 将string -> long long
 */
long long ToLong(std::string str) {
    long long result;
    std::istringstream is(str);
    is >> result;
    return result;
}

void show(int& put) {
    put = 10;
}
int main() {
    std::cout << GetCurrentTime() << std::endl;
    return 0;
}