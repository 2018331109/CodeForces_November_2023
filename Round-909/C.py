import math

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = [0] * (n + 1)
    
    mx = float('-inf')
    mn = float('inf')

    for i in range(1, n + 1):
        mx = max(mx, a[i - 1])
        mn = min(mn, a[i - 1])
        b[i] = a[i - 1] + b[i - 1]

    ans = abs(mn - mx)

    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            f, s = i, n // i

            mnn, mxx = float('inf'), float('-inf')
            for it in range(f, n + 1, f):
                mnn = min(mnn, b[it] - b[it - f])
                mxx = max(mxx, b[it] - b[it - f])
            ans = max(ans, abs(mnn - mxx))

            mnn, mxx = float('inf'), float('-inf')
            for it in range(s, n + 1, s):
                mnn = min(mnn, b[it] - b[it - s])
                mxx = max(mxx, b[it] - b[it - s])
            ans = max(ans, abs(mnn - mxx))

    print(ans)

if __name__ == "__main__":
    test = int(input())

    for _ in range(test):
        solve()

