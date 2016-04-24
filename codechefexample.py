t=eval(raw_input())
for k in range(t):
	n,q=map(int,raw_input().split(' '))
	s=raw_input()
	for p in range(q):
		a,b=map(str,raw_input().split(' '))
		times=s.count(a)
		if b=='even':
			if times%2==0:
				print 'yes'
			else:
				print 'no'
		if b=='odd':
			if times%2==0:
				print 'no'
			else:
				print 'yes'
			 
