## Question Ask

<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=default"></script>


Q1: 
```
for x in rang(i, n)
	array[x] = array[x+1]
```


Q2:
a. 二分查找
b. tree查找

Q3：
a. 

````
a
--
a b
-- 
a
--
a c
--
a c d
--
a c

````

b.

```
a
--
a b
--
b
--
b c
--
b c d
--
c d

```

Q4:
a:
1. 左对角线的都是0，其他都是1
2. 左对角线上有1
3. 所在行都是0

b：
NA

Q5：
找到一个点为root
然后找到左右接点为子孙节点
然后一次一次的循环本操作


Q6:
最小的层高就是每次都是2分，也就是 
\\(h = \sqrt{n - 1}\\)
刚好这个也等于 \\( \lfloor  log_2(n)  \rfloor \\)
上线就不用说了 h <= n-1

Q7:
1. 从前往后记录，记录权值，每次enquene 就在最后加入， dequene就从前便利取出最大的
2. 逆序存储，dequene就取最前，enquene的从后往前插入，找到适合的位置就行
3. 同上

Q8:
这个可以用区号作为Key，名字存在Value。

Q9：
- 优先队列
- 队列
- 栈

Q10:
直接把数据反转一下，对比每一个String就Ok了