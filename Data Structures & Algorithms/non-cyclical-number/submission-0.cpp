class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            fast = sos(fast);
            fast = sos(fast);
            slow = sos(slow);
        }while(slow!=fast);
        return fast == 1;
    }

    int sos(int num){
        int output = 0;
        while(num!=0){
            output += (num%10)*(num%10);
            num = num/10;
        }
        return output;
    }
};
