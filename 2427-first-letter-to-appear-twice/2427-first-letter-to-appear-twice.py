class Solution(object):
    def repeatedCharacter(self, s):
        """
        :type s: str
        :rtype: str
        """
        d={}
        for i in s:
            if i in d:
                d[i]+=1
                if d[i]==2:
                    return i
            else:
                d[i]=1
                