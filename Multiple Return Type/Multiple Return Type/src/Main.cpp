#include <iostream>
#include <tuple>
#include <utility>

struct Data {
    std::string data1, data2;
};

std::tuple<std::string, std::string, int> GetData() {
//  return std::make_tuple("one", "two", 3);
//  or
    return { "one", "two", 3 };
}

std::pair<std::string, std::string> GetData2() {
//  return std::make_pair("one2", "two2");
//  or
    return { "one2", "two2" };
}

Data GetData3() {
    return { "one3", "two3" };
}

int main() {
    // tuple
    std::string str1, str2, str3, str4;
    int num1, num2;

    tie(str1, str2, num1) = GetData();
    std::cout << str1 << ", " << str2 << ", " << num1 << std::endl;
    // or
    auto tupledata = GetData();
    str3 = std::get<0>(tupledata);
    str4 = std::get<1>(tupledata);
    num2 = std::get<2>(tupledata);
    std::cout << str3 << ", " << str4 << ", " << num2 << std::endl;

    std::string s1, s2, s3, s4;
    // pair
    tie(s1, s2) = GetData2();
    std::cout << s1 << ", " << s2 << std::endl;
    // or
    auto pairdata = GetData2();
    s3 = pairdata.first;
    s4 = pairdata.second;
    std::cout << s3 << ", " << s4 << std::endl;

    Data data = GetData3();
    std::cout << data.data1 << ", " << data.data2 << std::endl;
}

