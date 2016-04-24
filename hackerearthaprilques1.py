t=eval(raw_input())
for k in range(t):
	s=raw_input()
	maska=0
	times=s.count('a')+s.count('e')+s.count('i')+s.count('o')+s.count('u')+s.count('y')
	r=len(s)-times
	if r>times:
		print 'hard'
		maska+=1
 
	j=0
	chaska=0
	while (j+3)<=len(s) and maska==0:
		ct=0
		i=j
		p=0
		while p < 3:
			if s[i]=='a' or  s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'or  s[i]=='y':
				ct+=1
			p+=1
			i+=1
		j+=1
		if ct==0:
			print 'hard'
			chaska+=1
			break
	if chaska==0 and maska==0:
		print 'easy'
