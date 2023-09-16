class Solution {
public:
    bool isPalindrome(int x){ 
         if (x < 0) {
            return false;
        }
        long long reversed=0;
        int original=x;
        while(x!=0){
            int digit=x%10;  // getting last digit
            reversed=reversed*10+digit;   //pushing into reversed 
            x=x/10 ; //to remove te last digit after removing;
        }
       return (original==reversed);
        }
};
