#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <iostream>

using namespace std;

int getdir (string dir, std::vector<string> &files);