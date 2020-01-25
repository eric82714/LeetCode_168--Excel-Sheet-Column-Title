class Solution:
    def convertToTitle(self, n: int) -> str:
        title = ""
        
        while n > 0:
            index = (n-1) % 26
            title = chr(ord("A") + index) + title
            n = (n-1) // 26
        
        return title
