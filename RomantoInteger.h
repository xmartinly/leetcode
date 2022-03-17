#ifndef ROMANTOINTEGER_H
#define ROMANTOINTEGER_H
#include "stable.h"


class RomantoInteger {
public:
    int charToFactor(char s) {
        int i_factor = 1;
        switch (s) {
            case 'V':
                i_factor *= 5;
                break;
            case 'X':
                i_factor *= 10;
                break;
            case 'L':
                i_factor *= 50;
                break;
            case 'C':
                i_factor *= 100;
                break;
            case 'D':
                i_factor *= 500;
                break;
            case 'M':
                i_factor *= 1000;
                break;
        }
        return i_factor;
    }


    int romanToInt(string s) {
        int i_result = 0,
            i_neg = 0,
            i_lastNum = 0;
        for(auto iter = s.begin(); iter != s.end(); iter++) {
            int i_currentNum = charToFactor(*iter);
            i_result += i_currentNum;
            if(i_lastNum < i_currentNum) {
                i_neg += i_lastNum;
            }
            i_lastNum = i_currentNum;
        }
        return i_result - 2 * i_neg;
    }

};

#endif // ROMANTOINTEGER_H
