#include <vector>
#include <iostream>
#include <istream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::vector;
using std::string;
using std::sort;

istream& readWords(istream& in, vector<string>& words){
    if (in){
        words.clear();
        string s;
        while (in >> s) {
            if (s == "finish")
            {
                break;
            }
            words.push_back(s);
        }
        in.clear();
    }
    return in;
}


int main(void)

{

    vector<string> words;
    readWords(cin, words);
    sort(words.begin(), words.end());
    cout << "입력한 단어의 수: " << words.size() << endl;
    string temp = words[0];
    int cnt = 1;

    for (vector<string>::size_type i = 1; i < words.size(); i++)

    {

        if (temp == words[i])
        {
            cnt++;
            continue;
        }
        cout << temp << " : " << cnt << "번" << endl;
        temp = words[i];
        cnt = 1;

    }

    cout << temp << " : " << cnt << "번" << endl;

    return 0;

}
