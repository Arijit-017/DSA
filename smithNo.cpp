class Solution {
  public:
    int smithNum(int n) {
        int digit=n;
        int pFact=0;
        int sOd=0;
        while(digit){
            sOd+=digit%10;
            digit=digit/10;
        }
        while(n){
            for(int i = 1 ; i < n ; i++ ){
                if(n%i==0){
                    n=n/i;
                    pFact+=i;
                    break;
                }
            }
        }
        return (sOd==pFact);
    }
};