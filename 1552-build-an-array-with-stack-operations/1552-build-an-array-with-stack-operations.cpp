class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int c = 1;
        int s = target.size();
        int i = 0;
        while(i<s){
            if(target[i]==c){
                res.push_back("Push");
                i++;
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
            }
            c++;
        }
        return res;
    }
};