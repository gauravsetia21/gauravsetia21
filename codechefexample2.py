t=eval(raw_input())
for k in range(t):
	x=eval(raw_input())
	no1=map(int,(raw_input().split(' ')))
	no2=map(int,(raw_input().split(' ')))
	for i in range(x):
		no1[i]=no1[i]*no2[i]
	chaska=max(no1)
	times=no1.count(chaska)
	if times==1:
		maska=no1.index(chaska)
		print maska+1
	else:
		ka=max(no2)
		maska=no2.index(ka)
		print maska+1
	    
