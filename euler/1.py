n = 1000
tot = 0

for i in range(3, n):
  if (i % 3 == 0) or (i % 5 == 0):
    tot += i
  else: 
    pass

print(tot)
