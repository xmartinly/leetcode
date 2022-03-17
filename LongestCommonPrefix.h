#ifndef LONGESTCOMMONPREFIX_H
#define LONGESTCOMMONPREFIX_H
#include "stable.h"
class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string>& vs_strs) {
        string s_result = "", s_first = vs_strs.at(0);
        int i_inputLen = vs_strs.size();
        int i_firstStrLen = vs_strs.at(0).size();
        for(int i  = 0; i < i_firstStrLen; i++) {
//            s_result +=
            for(int j = 0; j < i_inputLen; j++) {
            }
        }
        return s_result;
    }
};
#endif // LONGESTCOMMONPREFIX_H
