fopen=open('abc.txt')
s=fopen.read()
s1=str(s)
lines=s.split(' ')
d={}
for i in lines:
	d[i]=d.get(i,0)+1
for p in d:
	print d[p] ,p
	
