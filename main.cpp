#include "LongestCommonPrefix.h"

int main(int argc, char* argv[]) {
    QCoreApplication a(argc, argv);
    LongestCommonPrefix solution;
    vector<string> strs =  {"flower", "flow", "flight"};
    qDebug() << QString::fromStdString(solution.longestCommonPrefix(strs));
    return a.exec();
}
