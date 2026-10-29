class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.length();
        queue<int> qR;
        queue<int> qD;
        for(int i=0;i<n;i++){
            if(senate[i] == 'R') qR.push(i);
            else qD.push(i);
        }
        int idx=n;
        while(qR.size() > 0 && qD.size() > 0){
            int r=qR.front();
            int d=qD.front();
            qD.pop();
            qR.pop();

            if(r<d){
                qR.push(idx++);
            }
            else{
                qD.push(idx++);
            }
        }
        return (qR.size() == 0) ? "Dire" : "Radiant";
    }
};
