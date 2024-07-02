class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        i=0;j=len(tokens)-1;sc=0;mx=0

        tokens.sort()

        while(i<=j):
            if(power>=tokens[i]):
                power-=tokens[i]
                sc+=1
                i+=1
                mx=max(mx,sc)
            elif(sc>0):
                sc-=1
                power+=tokens[j]
                j-=1
            else:
                break

        return mx

        