class Girl:
	gender='female'
	def __init__(self,name):
		self.name=name
 
	def soccer(self):
		print self.name
		print self.gender
 
asl=Girl('russel')
asl.soccer()
