fopen=open('abc.txt')
s=fopen.read()
s1=str(s)
lines=s.split('\\n')
f2open=open('pqr.txt',"w")
for line in lines:
	f2open.write(line+'\n')
fopen.close()
f2open.close()
	
