x = [1,2]
i = 0
err = "IndexOutOfBounds: {}"

while i < 3:
 try:
  print x[i]
 except IndexError:
  print err.format(i)
 i+=1
