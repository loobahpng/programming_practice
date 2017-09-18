class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while (True):
            if n==2:
                return True
            if n%2==1:
                return False
            n=n/2

if __name__=='__main__':
    s=Solution()
    print(s.isPowerOfTwo(64))
