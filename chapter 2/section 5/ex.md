Q1:
NA

Q2:
````

0 1 2 4 
1 2 3 5

````

F(n) = F(n-2) + n - 1



Q3:
这个就是看

```
def how_many_step(n):
	if n == 1:
		return 1;
	if n == 2:
		return 2
	if n > 2:
		return how_many_step(n - 1) + how_many_step(n - 2) + 2

```


Q4:
F(n) = F(n-1) + F(n-2)
F(0) = 0
F(1) = 1

偶，奇数，奇数，偶数，奇数，奇数，偶数

n = 3x的时候就是偶数


Q6：
NA 写个程序太简单了


Q8:
这个很简单啊，直接用数据组，0表示没有 1表示有。



Q12：
写个Python试试 Q10.py