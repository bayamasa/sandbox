i = input()
data = list(map(int,input().split()))
 
data.remove(max(data))
print(data.index(max(data)))
