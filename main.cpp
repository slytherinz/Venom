#include <string>
#include <iostream>
#include <sstream>
#include <sys/time.h>
#include <string.h>

/**
 * 当前时间秒数
 * @return
 */
long long GetCurrentTime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec;
}

std::string GetFormatTime() {
    char curr_time[64];
    bzero(curr_time, sizeof(curr_time));
    time_t timep;
    time(&timep);
    strftime(curr_time, 64, "%Y%m%d%H%M", localtime(&timep));
    return curr_time;
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

/***
 * 将long long -> string
 */
std::string ToString(long long id) {
    std::string fromstring;
    std::stringstream fromstream;
    fromstream << id;
    fromstring = fromstream.str();
    return fromstring;;
}

int main() {
    std::cout << GetCurrentTime() << std::endl;
    std::cout << GetFormatTime() << std::endl;
    return 0;
}