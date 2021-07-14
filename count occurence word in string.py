s=input("enter the string")
t=input("enter the word")
n=len(t)
m=len(s)
c=0
for i in range(m-n+1):
    if s[i:i+n]==t:
        c+=1
print(c)
