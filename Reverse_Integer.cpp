//Given a 32-bit signed integer, reverse digits of an integer.
//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int temp = 0, tens = 0, res=0;
        vector<int> num;
        temp = x;
        while(int((float)temp/10) != 0){
            res = temp % 10;
            num.push_back(res);
            temp = int((float)temp/10);            
            tens++;
        }
        num.push_back(temp);
        int div=0, rev = 0;
        for(int i = 0; i < num.size(); i++){
            rev = rev + num[i]*pow(10,tens);
            tens--;
        }            
        return rev;
    }    
};
