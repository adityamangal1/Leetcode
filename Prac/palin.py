class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x < 0):
            return False
        x = str(x)
        if(x[0:] == x[::-1]):
            return True
