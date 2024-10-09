class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        b = 0
        u = 0
        for i in s:
            if i == '(':
                b+=1
            else:
                if b>0:
                    b-=1
                else:
                    u+=1
        return abs(b+u)
