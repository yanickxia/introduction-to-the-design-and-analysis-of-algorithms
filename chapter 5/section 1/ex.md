Q1:

def find_max(array):
	if len(array) == 1:
		return array[0]
	array_a = array[0:len(n) - 1];
	array_b = array[len(n):n];
	max_a = find_max(array_a) 
	max_b = find_max(array_b)
	if max_a > max_b:
		return max_a
	else
		return max_b

		
		
Q2:
和上面差不多··就是返回一组值

Q3：
def compute(a,n):
	if n > 1:
	 	r = compute(a, n / 2)
		return r*r
	
	
	return a

	
Q5:
从主定理可证明

Q7：
是一个稳定的

Q10：
看源码


