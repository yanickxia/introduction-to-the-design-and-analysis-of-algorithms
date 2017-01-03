## Question Ask

Q1: [al-Khorezmi](https://zh.wikipedia.org/wiki/%E8%8A%B1%E6%8B%89%E5%AD%90%E7%B1%B3)

Q2: 专利应该保护的是技术，实用型或者是既有产品，算法应该不受保护。 
``
根据专利法第二十五条，“智力活动的规则和方法”是不授予专利权的。
``

Q3.1
-  启动汽车
-  沿着路A
-  到某一点转向路B
-  抵达目的地

Q4：
这个算法，从 b = a/2 处开始取值计算 , 每次从 0， b 中间取数 c， 不断的比较。
比较快的还是牛顿迭代法

Q5：
max(m,n)

Q6: 
- gcd(31415, 14142) = 1；见 gcd中 gcd函数和 euclid_gcd函数。
- 应该是31415倍

Q7:
- 本题可用图形法整，假设有 m * 1 的长方形， n * 1 的长方形。假设最大公约数是 t * 1的长方形，而 m % n, n 的公约数也是 t

Q8：
- 至多处理一次，第一次就会将整个 m n的顺序颠倒过来。

Q9：
- Max:  每一步都是质素， 0，1，3，5，8 ，所以结果是 5
- Min:  1

Q10:
a:
```
Euclid(m,n)

while m > n do
    r = m - n
    if r < 0
        return n
    Euclid(n,r)
```

b:
假设有 x y 两个数， 最大公约数是 r, x = n * r,  y = m * x,
 不同的数组合是 (m + n) 种。计算下 m+n 是奇数还是偶数，再选择先行还是后手

Q11：
- a  egcd.cpp  证明见 http://www.cnblogs.com/frog112111/archive/2012/08/19/2646012.html
- b  同上。

Q12：
Code 见 Q12


## Codes
- [gcd.cpp](./gcd.cpp)
