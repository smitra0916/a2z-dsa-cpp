class Solution {
public:
    int reverse(int x) {
        long long int reverseNum=0;         //LONG LONG INT to allow go beyond range for the time being
        int i=x;
        while((x>0&&i>0)||(x<0&&i<0))       //both negative and positive nos
        {
            reverseNum=(reverseNum*10)+(i%10);
            if (reverseNum > INT_MAX || reverseNum < INT_MIN) {
                return 0;
                break;
        }
            i=i/10;
        }
    return reverseNum;
        
    }
};