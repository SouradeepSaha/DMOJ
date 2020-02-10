def compute_gcd(x, y):
    while y:
        x, y = y, x % y
    return x


num = int(input())
den = int(input())
gcd = int(compute_gcd(num, den))
ans = int(num/den)

if ans or not num % den:
    print(ans, end=' ')
if num % den:
    print(int(num % den/gcd), '/', int(den/gcd), sep='')
