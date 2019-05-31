class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        if(s == t) return true;
        unordered_map<char, char> map;
        for(int i=0;i<s.length();i++){
            unordered_map<char,char>::const_iterator got = map.find (s[i]);
            if(got == map.end()){
                bool insertaionFlag = 0;
                for(int i=0; i<map.size();i++){
                    if(map[i] == t[i]){
                        insertaionFlag = 1;
                    }
                }
                if(insertaionFlag==0) map.insert({s[i],t[i]});
                cout << "Inserting the following tuple" << s[i] << t[i] << endl;
            }
            else {
                if(map[s[i]] != t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};