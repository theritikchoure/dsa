#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    system("git init");

    system("git add .");

    char *a = argv[1];
    system("git commit -m ${a}");
  
    system(argv[1]);

    return 0;
}