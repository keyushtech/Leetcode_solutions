// Title: Longest Common Prefix
            // Difficulty: Easy
            // Language: Python
            // Link: https://leetcode.com/problems/longest-common-prefix/

        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        
        # Iterate character by character using the first string as reference
        for i in range(len(strs[0])):
            char = strs[0][i]
            
            # Compare with the corresponding character in all other strings
            for j in range(1, len(strs)):
                # If out of bounds or character mismatch occurs
                if i == len(strs[j]) or strs[j][i] != char:
                    return strs[0][:i]
                    
        return strs[0]
