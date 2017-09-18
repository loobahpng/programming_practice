class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        squaresumlist=[]
        while(True):
            digitlist=[]
            while (True):
                digitlist.append(n%10)
                n=n/10
                if (n==0):
                    break
            squaresum=0
            for i in digitlist:
                squaresum=squaresum+i**2
            print(squaresum)
            if squaresum==1:
                return True
            if squaresum in squaresumlist:
                return False
            squaresumlist.append(squaresum)
            n=squaresum

if __name__=='__main__':
    s=Solution()
    print(s.isHappy(79))
