import sys

sys.setrecursionlimit(10000000)

big = 18446744073709551616


def Rare(x, y):
    if dp[x][y] != -1:
        return dp[x][y] % big
    if y <= 2:
        return (x + y) % big
    dp[x][y] = ((x + Rare(x, y - 1)) % big + (5 * Rare(x, y - 2)) % big) % big
    return dp[x][y] % big


n = int(raw_input())
for i in range(n):
    dp = [[-1] * 10005] * 10005
    txt = raw_input().split(" ")
    x = int(txt[0])
    y = int(txt[1])
    print(Rare(x, y) % big)
