class Solution {
public:

    string encode(vector<string>& strs) {
        string code;
        for(auto x: strs){
            code += to_string(x.length())+"#"+x;
        }
        return code;
    }
vector<string> decode(string s) {
        vector<string> text;
        int i = 0;
        
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int n = stoi(s.substr(i, j - i));
            
            text.push_back(s.substr(j + 1, n));
            
            i = j + 1 + n;
        }
        
        return text;
    }
};
