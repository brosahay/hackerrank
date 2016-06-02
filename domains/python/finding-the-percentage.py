# Enter your code here. Read input from STDIN. Print output to STDOUT
from __future__ import division
n=int(raw_input());
marks={};
for i in range(0,n):
	str=raw_input();
	mystr=str.split(" ");
	avg=0;
	for j in range(1,n+1):
		avg+=float(mystr[j]);
		print avg;
	marks[mystr[0]]=avg/n;
qname=raw_input();
print n;
print ("%.2f" % marks[qname]);