

#include <string>
#include <iostream>
using namespace std;
bool search(string s, string p)
{

       size_t pos = s.find(p);
       if (pos != std::string::npos)
           return true;
       else
            return false;
}

int main() {
    int i = search("Hello world","llx");
    cout << i << endl;
        cout << search("Hello world","ll")<< endl;
                cout << search("Hello world","lxl")<< endl;
        cout << search("Hello world","ll")<< endl;

        cout << search("Hello world","xll")<< endl;


}

