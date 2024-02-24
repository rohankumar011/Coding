a=int(input("Enter the unit"))
if a>0 and a<150:
 print("unit is",float(a*2.40))
elif a>150 and a<300:
 print("unit is",float((150*2.40+((a-150)*3.00))))
else:
 print("unit is",float((300*3.00)+((a-300)*3.20)))