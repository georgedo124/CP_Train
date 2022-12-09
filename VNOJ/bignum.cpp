#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
 
#include <algorithm>
#include <stack>
#include <bitset>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <chrono>
#include <string>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>

typedef long long ll; 
typedef unsigned long long ull; 

std::string add(std::string firstNum, std::string secondNum) {
    while (firstNum.size() < secondNum.size()) firstNum = '0' + firstNum; 
    while (secondNum.size() < firstNum.size()) secondNum = '0' + secondNum;

    int carry = 0; 
    std::string res = ""; 

    // std::cout << firstNum << " " << secondNum << "\n"; 

    for (int i = ((int) firstNum.size()) - 1; i >= 0; i--) {
        int tmp = firstNum[i] - '0' + secondNum[i] - '0' + carry; 

        carry = tmp / 10; tmp %= 10; 
        res = (char) (tmp + '0') + res; 
    } 
    if (carry > 0) res = '1' + res; 

    return res; 
}

std::string sub(std::string firstNum, std::string secondNum) {
    while (firstNum.size() < secondNum.size()) firstNum = '0' + firstNum; 
    while (secondNum.size() < firstNum.size()) secondNum = '0' + secondNum;

    int borrow = 0;
    std::string res = ""; 
    bool neg = false; 

    if (firstNum < secondNum) { std::swap(firstNum, secondNum); neg = true; }  

    for (int i = ((int) firstNum.size()) - 1; i >= 0; i--) {
        int tmp = firstNum[i] - secondNum[i] - borrow; 

        if (tmp < 0) {
            tmp += 10; 
            borrow = 1;
        } else borrow = 0; 

        res = (char) (tmp + '0') + res; 
    }   

    while (res.size() > 1 && res[0] == '0') res.erase(0, 1);  
    res = neg ? '-' + res : res; 

    return res; 
}

std::string mul(std::string firstNum, std::string secondNum) {
    int firstNumLength = firstNum.size(), secondNumLength = secondNum.size(); 
    int resLength = firstNumLength + secondNumLength;

    std::vector<int> firstInt, secondInt; 
    for (int i = 0; i < firstNumLength; i++) 
        firstInt.push_back(firstNum[i] - '0'); 
    for (int i = 0; i < secondNumLength; i++) 
        secondInt.push_back(secondNum[i] - '0');    

    std::vector<std::vector<int>> res(secondNumLength);

    int index = 0;  

    for (int i = secondNumLength - 1; i >= 0; i--) {
        int carryMul = 0, tmp = 0; 
        int suffixZero = 0;  

        while (suffixZero < index) {
            res[index].push_back(0); 
            suffixZero++; 
        }

        for (int j = firstNumLength - 1; j >= 0; j--) {
            tmp = firstInt[j] * secondInt[i] + carryMul; 
            res[index].push_back(tmp % 10); 
            carryMul = tmp / 10; 
        }

        if (carryMul > 0) res[index].push_back(carryMul); 
        while (((int) res[index].size()) < resLength) res[index].push_back(0); // Fill all prefix zero

        reverse(res[index].begin(), res[index].end()); 
        index++; 
    }

    int carryAdd = 0;  
    std::string ans = ""; 

    for (int i = resLength - 1; i >= 0; i--) {
        int tmp = carryAdd; 
        for (int j = 0; j < secondNumLength; j++) 
            tmp += res[j][i]; 

        carryAdd = tmp / 10; tmp %= 10; 
        ans = (char) (tmp + '0') + ans; 
    }

    if (carryAdd > 0) ans = (char) (carryAdd + '0') + ans; 
    while (ans.size() > 1 && ans[0] == '0') ans.erase(0, 1);

    return ans; 
}

int main() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); 

    std::string firstNum, secondNum; std::cin >> firstNum >> secondNum;  

    std::cout << add(firstNum, secondNum) << "\n"; 
    std::cout << sub(firstNum, secondNum) << "\n"; 
    std::cout << mul(firstNum, secondNum) << "\n"; 

    return 0;
}
