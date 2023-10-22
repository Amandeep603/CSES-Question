def longest_palindromic_substring(s):
    n = len(s)
    # Initialize a table to store the palindrome information
    table = [[False for _ in range(n)] for _ in range(n)]

    # All substrings of length 1 are palindromes
    for i in range(n):
        table[i][i] = True

    start = 0  # Start index of the longest palindromic substring found so far
    max_length = 1  # Length of the longest palindromic substring found so far

    # Check for palindromes of length 2
    for i in range(n - 1):
        if s[i] == s[i + 1]:
            table[i][i + 1] = True
            start = i
            max_length = 2

    # Check for palindromes of length greater than 2
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1  # Ending index of the current substring
            if table[i + 1][j - 1] and s[i] == s[j]:
                table[i][j] = True
                if length > max_length:
                    start = i
                    max_length = length

    return s[start:start + max_length]

# Input
s = input().strip()

# Find and print the longest palindromic substring
result = longest_palindromic_substring(s)
print(result)
