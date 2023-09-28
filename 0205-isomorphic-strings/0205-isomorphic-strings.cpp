class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        if(str1.size() != str2.size())
        return false;
   
        unordered_map<char,vector<int>>mp1;
        unordered_map<char,vector<int>>mp2;
        for(int i=0;i<str1.size();i++){
            mp1[str1[i]].push_back(i);
        }
        for(int i=0;i<str2.size();i++){
            mp2[str2[i]].push_back(i);
        }
        for(int i=0;i<str1.size();i++){
            if(mp1[str1[i]]  !=mp2[str2[i]]){
                return false;
            }
        }
        return true;
    }
};