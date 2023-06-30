class Solution {
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int digit=0;
        for(int i=N; i>0; i=i/10)
        {
            digit=i%10;
            if(digit!=0&&N%digit==0){     // remove digit when its 0 
                count+=1;
            }
        }
    return count;
    }
};