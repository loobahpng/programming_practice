class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        digitsum=0
        while (True):
            digitsum=digitsum+num%10
            num=num/10
            if num==0:
                break
        if digitsum>=10:
            digitsum=self.addDigits(digitsum)
        return digitsum
if __name__=='__main__':
    s=Solution()
    print(s.addDigits(12345))        
