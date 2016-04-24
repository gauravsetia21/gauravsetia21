t=eval(raw_input())
for k in range(t):
	arr=[0 for i in range(1000001)]
	n=eval(raw_input())
	chaska=map(int,raw_input().split(' '))
	ct=0
	for i in range(n):
		if arr[chaska[i]%10]==0:
			arr[chaska[i]%10]=1
		else:
			ct+=1
	print ct
 
