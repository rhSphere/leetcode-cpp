#include <cstring>
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<const char*, const char*> mp;
    map<const char*, const char*>::iterator iter;

    const char key[3][20] = {"img", "system", "ip"};
    const char val[3][20] = {"d:/a.img", "win7", "193.68.6.3"};

    for (int i = 0; i < 2; i++) {
        mp.insert(make_pair(key[i], val[i]));
    }
    
}