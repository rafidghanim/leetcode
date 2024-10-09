class Solution:
    def minSwaps(self, s: str) -> int:
        b = 0
        u = 0
        for i in s:
            if i =='[':
                b+=1
            else:
                b-=1
            u = min(u,b)
        return (-u+1)//2
