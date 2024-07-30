s=input()
s=s.lower()
v=['a','e','i','u','o','y']
sol=""
for i in range(len(s)):
    if s[i] in v:
        sol+=""
    else:
        sol+="."+s[i]

print(sol)