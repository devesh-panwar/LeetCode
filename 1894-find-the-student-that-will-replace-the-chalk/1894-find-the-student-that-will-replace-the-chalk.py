class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:

        su=sum(chalk)
        k=(int)(k%su)
        if(k==0 or k<=chalk[0]):
            return 0

        for i in range(len(chalk)):
            if(k>=chalk[i]):
                k-=chalk[i]
            else:
                return i

        return 0

        