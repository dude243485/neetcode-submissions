class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        bool read = false;
        for (auto word : strs){
            string s = to_string(word.length());
            res += s + ';' + word;
        }
        return res;

    }

    vector<string> decode(string s) {
        
        int p = 0;
        vector<string> res ;

        string word = "";
        while (p < s.length()){
            if (s[p] != ';'){
                word += s[p];
                p++;
            } else{
                p++;
                int n = stoi(word);
                string str = "";
                for (int i {0}; i < n ; i ++){
                    str += s[p];
                    p++;
                }
                res.push_back(str);
                word="";
            }
        }

        return res;


    }
};