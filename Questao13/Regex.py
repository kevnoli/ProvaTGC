import re
print("\\.s\\ casa com \"as\"? ")
if re.search(".s","as") != None:
 print("true");
else:
 print("false");
print("\\.s\\ casa com \"mk\"? ")
if re.search(".s","mk") != None:
 print("true");
else:
 print("false");
print("\\.s\\ casa com \"mst\"? ")
if re.search(".s","mst") != None:
 print("true");
else:
 print("false");
print("\\..s\\ casa com \"mas\"? ")
if re.search("..s","mas") != None:
 print("true");
else:
 print("false");
