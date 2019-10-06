msg = 'x = {}'
print('Bitwise OU');
x = 0;
for i in range(5):
 x += 1;
 if((1==1) | (x<3)):
  print(msg.format(x));
print('\nOU');
x = 0;
for i in range(5):
 x += 1;
 if((1==1) or (x<3)):
  print(msg.format(x));
