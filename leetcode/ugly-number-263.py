class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n==1:
            return True
        while (True):
            if n%2==0:
                n=n/2
                continue
            if n%3==0:
                n=n/3
                continue
            if n%5==0:
                n=n/5
                continue
            if n==1:
                return True
            return False
if __name__=='__main__':
    s=Solution()
    print(s.isUgly(6))
