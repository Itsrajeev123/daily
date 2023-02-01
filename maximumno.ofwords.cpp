class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            int cnt = 1;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' ') 
                cnt++;
            }
            count = max(cnt,count);
        }
        return count;
    }
};
