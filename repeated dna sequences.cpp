class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;

        if (s.size() < 10) {
        return result;  
    }
         unordered_map<std::string, int> map;
         for (int i = 0; i <= s.size() - 10; ++i) {
           string sequence = s.substr(i, 10);
             map[sequence]++;
           }
           for(auto& i:map){
            if(i.second>1){
                result.push_back(i.first);

            }
           }
           return result;

    }
};