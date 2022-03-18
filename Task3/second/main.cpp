#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {

    string str1 = "sad2fasd 1236 fghfdgh fdgh 5464 dfdgh fghdfg 4654 984561 dfgh fdgh fghdfgh 312564 fdgh  794 8965 47 fdghfdgh 654 987437 g 15789";
    string s;
    int ans = 0;
    for (int i =0; i < str1.length(); ++i){
        if (int(str1[i]) > 47 && int(str1[i]) < 58) {
            s += str1[i];
        } else if (str1[i] == ' ' && s != "") {
            for (int j = 0; j < s.length(); ++j) {
                ans += (int(s[j]) - 48) * pow(10, s.length() - 1 - j);
            }
            cout << ans << endl;
            ans = 0;
            s = "";
        } else if (s != "") {
            s = "";
        }

    }
    if (s != "") {
        for (int j = 0; j < s.length(); ++j) {
            ans += (int(s[j]) - 48) * pow(10, s.length() - 1 - j);
        }
        cout << ans << endl;
        s = "";
    }
    return 0;
}
