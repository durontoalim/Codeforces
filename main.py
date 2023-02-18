lst2 = []
n = int(input())

input_string = input()
print("\n")
lst = input_string.split()

for i in range(0, n):
	lst[i] = int(lst[i])
	
lst.sort()
lst2.append(lst[0])
for i in range(1,n):
   if lst[i] == lst[i-1]:
      continue
   lst2.append(lst[i])

xx = len(lst2)

print(lst2[xx-2])

