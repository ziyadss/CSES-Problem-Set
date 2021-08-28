#include <fstream>
#define FILEIO                  \
    ifstream in("../in.txt");   \
    cin.rdbuf(in.rdbuf());      \
    ofstream out("../out.txt"); \
    cout.rdbuf(out.rdbuf());

//FILEIO