import string
s = input()
result = 10**9
for last in string.ascii_lowercase:
    t = list(s)
    while not all(c == last for c in t):
        for i in range(len(t)):
            if last in t[i : i + 2]:
                t[i] = last
        print(t)
        t.pop()
        
    result = min(result, len(s) - len(t))
print(result)
