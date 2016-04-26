# ZIP FUNCTION
a=[1,4,9,16]
b=[2,3,11,14]
x=zip(a,b)
print x
print "====================================="
for i,j in x:
	if i>j:
		print "a"
	else:
		print "b"
