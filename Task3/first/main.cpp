#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "sad2fasd 1236 fghfdgh fdgh 5464 dfdgh fghdfg 4654 984561 dfgh fdgh fghdfgh 312564 fdgh  794 8965 47 fdghfdgh 654 987437 g 15789";
    char s[] = "      ";
//    s[0] = ' ';
    int ans = 0;
    int j = 0;
    for (int i = 0; i < strlen(str1); ++i){
//        cout << str1[i];
        if (int(str1[i]) > 47 && int(str1[i]) < 58) {
            s[j] = str1[i];
            j += 1;
        } else if (str1[i] == ' ') {


            if ((s[0]) != ' ') {
//                cout << s[0];
                for (unsigned int k = 0; k < j; ++k) {

                    ans += (int(s[k]) - 48) * pow(10, j - 1 - k);
                }
                cout << ans << endl;
//                cout << strlen(s) << endl;
                for (int k = 0; k < strlen(s) - 1; ++k) {
                    s[k] = ' ';
                }
                ans = 0;
            }
            j = 0;
        } else {

            for (int k = 0; k < strlen(s) - 1; ++k) {
                s[k] = ' ';
            }
            j = 0;



        }
    }

//    cout << int('0'); // 48
//    cout << int('9');  // 57
    if ((s[0]) != ' ') {
        for (unsigned int k = 0; k < j; ++k) {

            ans += (int(s[k]) - 48) * pow(10, j - 1 - k);
        }
        cout << ans << endl;
    }
    return 0;
}
