#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    system("git init");

    system("git add .");

    system("git commit -m commit");

    system("git push origin master");
  
    return 0;
}