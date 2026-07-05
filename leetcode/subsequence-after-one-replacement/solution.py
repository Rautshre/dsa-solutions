class Solution:
    def canMakeSubsequence(self, s: str, t: str) -> bool:
        from functools import lru_cache 
        @lru_cache(None) 
        def f(i, j, used): 
            if i == len(s): 
                return True 
            if j == len(t) or len(s) - i > len(t) - j: 
                return False 
            if s[i] == t[j]: 
                return f(i+1, j+1, used)
            else: 
                if used == False: 
                    return f(i+1, j+1, True) or f(i, j+1, False) 
                else: return f(i, j+1, True)  
        return f(0, 0, False)

        