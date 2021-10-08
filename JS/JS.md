### 02 第一个程序Hello World

>  学了三个指令

```
//弹出警告的窗口
alert("warning!!!");
//在文档写入内容，会在窗口显示
document.write("hello world");
//在控制台写入内容
console.log("wowo");
```

### 03 JS编写的位置

>  JS引用样式的三种方式，和CSS很像

- 写在body里，例如：
  - 写在button标签的onclick属性中，当触发的时候就会执行
  - 写在a标签的href属性中，点击超链接就会执行

- 内部样式
  - 写在head里内部引用

- 外部样式
  - script标签引入

```
<script type="text/javascript" src="">
//这里即使再写也没用
</script>
```

### 04 JS基本语法

- 注释

```
//单行注释

/*
多行注释
多行注释
*/
```

- JS中严格区分大小写

- JS每条语句以分号结尾

- JS中会忽略多个空格和换行

### 05 字面量和变量

字面量：例如1 2 3 4，都是一些不可以改变的值，可以直接使用的，但是我们一般不会直接使用字面量，使用起来不方便

变量：变量可以保存字面量，而且变量可以任意改变，使用方便，开发的时候基本都是用变量去存储字面量，很少直接使用字面量，通过变量也可以对字面量进行描述

- 变量的使用步骤，var只用在第一次声明变量的时候写

  - 声明变量：var 变量名；
  - 初始化变量：变量 = ；

  - 或者声明和初始化同时进行：var 变量名 = ；

### 06 标识符

- 变量名、函数名、属性名都属于标识符

- 标识符的命名规则：

  - 标识符可以包含字母、数字、_、$
  - 标识符不能以数字开头
  - 标识符里不能是ES中的关键字或者保留字

  - 建议使用驼峰命名法（首字母小写，每个单词的开头字母大写其余小写）

- 中文也可以作为标识符，但是不建议用

### 07 字符串

数据类型（字面量的类型）

JS中一共有6中数据类型前5种是基本数据类型，最后一种是引用数据类型

```
String	字符串
Number	数值
Boolean	布尔值
Null	空值
Undefined	未定义
Object	对象
```

- String 字符串

```
var str = "hello";	//字符串必须放在引号里（单引号或者双引号都行）
```

注意引号不能嵌套

- 转义字符

```
\"	双引号
\n	换行
\t	制表符
\\	\
```

### 08 Number

> typeof运算符的使用；Number . MAX_VALUE	Number . MIN_VALUE

注意JS是顺序执行

- 在JS中所有的数值都是Number类型

```
var a = 123;
var b = "123";
```

- 怎样区分上面这两个变量的类型？运算符typeof

```
var a = 123;
typeof a;
var b = "123"
typeof b;
```

- JS中表示数值的最大值和最小值（输出都是科学计数法）

```
Number.MAX_VALUE;
Number.MIN_VALUE;
```

- 使用typeof检查NaN的数据类型也是Number

```
var a = "andn";
var b = "bas";
var c = a * b;
console.log(c);	//输出 Not a Number
```

在JS里整数的运算基本都没有问题，如果计算的是浮点数，可能会造成精度的问题

### 09 布尔值

布尔值只有两个true和false，主要是进行逻辑判断

```
var bool1 = true；
var bool2 = false；
console.log(bool1)；
console.log(bool2)；
```

### 10 Null 和Undefined

- Null数据类型只有一个值null
- null的作用是去表示一个空的对象
- 使用typeof检查null的数据类型时会返回object

```
var a = null；
console.log(typeof a);
```

- Undefined数据类型的值只有一个就是undefined
- 当声明变量但是没有初始化的时候这个变量的数据类型就是Undefined

```
var a;
console.log(a);
console.log(typeof a);
//都会返回undefined
```

### 11 强制类型转换

将一个数据类型强制转化为另外一种数据类型

一般是将其他数据类型转换为String、Number、Boolean

#### 其他数据类型转换为String数据类型

- 方法一：调用被转换数据类型的toString( )方法

> 这种方法不会影响原来的变量，它会将转换的结果返回
>
> 注意null和undefined没有toString的功能

```
var a = 123;
a = a.toString();
console.log(typeof a);
console.log(a);
```

```
var b = true;
b = b.toString();
console.log(typeof b);
console.log(b);
```

- 方法二：使用String( )函数直接将待转换的变量作为参数传入String( )函数中

  > 对于number和Boolean实际上是调用toString( )方法
  >
  > 但是对于null和undefined，就不会调用toString( )方法
  >
  > null	->	"null"
  >
  > undefined	->	"undefined"

```
var a = 123;
var a = String(a);
console.log(typeof a);
console.log(a);
```

```
var b = true;
b = String(b);
console.log(typeof b);
console.log(b);
```

#### 其他数据类型转换为Number数据类型

- 方法一：使用Number( )函数

> 字符串里只要存在非数值类型就转不了Number，例如"123px"，返回的是NaN，所以这是这种方法的缺陷
>
> 如果被转换的字符串是一个空串或者全是空格的字符串，则返回0
>
> true	->	1
>
> false	->	0
>
> null	->	0
>
> undefined	->	NaN

```
var a = "123";
a = Number(a);
console.log(typeof a);
console.log(a);
```

```
var = "adc12";
a = Number(a);
console.log(typeof a);
console.log(a);
//返回 NaN
```

- 方法二：parseInt( )	parseFloat( )	这种方法专门用来对付字符串，非字符串返回NaN
- parseInt( )将字符串里从左往右的有效整数提取出来，遇到非数字就停止，例如"a15443"，返回的是NaN；也可以用该函数进行取整操作

```
var a = "123px";
a = parseInt(a);
console.log(typeof a);
console.log(a);
```

- parseFloat( )将字符串里从左往右的有效小数提取出来，遇到非数字就停止

```
var a = "123.59px";
a = a.parseFloat(a);
console.log(typeof a);
console.log(a);
```

#### 其他类型转换为Boolean

使用Boolean( )函数

> 数字转布尔，除了0和NaN都是true
>
> 字符串转布尔，除了空串，其余都是true
>
> null	->	false
>
> undefined	->	false
>
> object	->	true

```
var b = 123;
b = Boolean(b);
console.log(typeof b);
console.log(b);
```

### 13 其他进制的数字

浏览器输出都是10进制

```
//	0x开头的是16进制
//	0开头的是8进制
//	0b开头是2进制
```

像"070"这种字符串，在转换为数字后，有些浏览器会当成8进制解析，有些浏览器会当成10进制解析，为了统一解析的规则，可以使用parseInt( )函数的第二个参数规定转换为多少进制

```
var a = "070";
a = parseInt(a,10);	//10表示转换为10进制
console.log(typeof a);
console.log(a);
```

### 15 运算符

> 加法自动转换为字符串类型
>
> 减法、乘法、除法自动转换为数值类型
>
> 隐式类型转换，加法的字符串类型转换
>
> 减法-0，乘法*1，除法/1的数值类型转换

typeof就是一个运算符，作用是获得变量的数据类型，返回的数据类型是一个String类型

算数运算符

```
+
-
*
/
%
```

#### 加法

任何值和NaN加法运算，结果都是NaN

多个字符串的运算：拼接操作

字符串和值的运算：数值先转换为字符串再做拼接运算

利用字符串和数值的运算把数值转换为字符串（隐式类型转换，由浏览器自动完成，实际上也是调用了String( )函数）

```
var a = 123;
b = a + "";	//加上空串
console.log(typeof b);
console.log(b);
```

```
var c = 123;
c = c + "";
console.log("c = " + c);
//	输出"c = 123"
```

```
var result;
result = 1 + 2 + "3";
console.log("result" + result);
//	输出"result = 33"
```

```
var result;
result = "1" + 2 + 3;
console.log("result" + result);
//	输出"result = 123"
```

注意运算的顺序

#### 减法

```
var a = 100;
var result = a - "1";
console.log("result = " + result);
//	输出99
```

#### 乘法

```
var result = 2 * "8";	//输出16
var result = 2 * null;	//输出NaN
var result = 2 * undefined;	//输出0
```

#### 除法

任何值做减法、乘法、除法运算，都会自动转换为Number

利用上面的准则，将其他数据类型转换为Number类型（隐式类型转换）

```
var a = "100";
a = a - 0;
console.log(typeof a);
console.log("a = " + a);
```

```
var a = "1689";
a = a * 1;
console.log(typeof a);
console.log("a = " + a);
```

```
var a = "1689";
a = a / 1;
console.log(typeof a);
console.log("a = " + a);
```

#### 取模

### 16 一元运算符

> 利用一元运算符进行数值的隐式转换是很方便的，直接一个加号，适用于任何数据类型

typeof( )就是一个一元运算符

```
正号	+
负号	-	//	可以对符号进行取反
```

非Number值在进行取反运算的时候会先转换为Number类型再取反

```
var a = true;
a = -a;
console.log(typeof a);
console.log("a = " + a);
//	输出"a = 0"
```

一元运算符的隐式转换

```
var a = "100";
a = +100;
console.log(typeof a);
console.log("a = " + a);
//	输出"a = 100"且数据类型是Number
```

```
var a = 1 + +"2" + 3;
console.log(typeof a);
console.log("a = " + a);
//	输出类型为Number，a = 6;
```

### 17 自增和自减运算符

#### 自增 a++ 和 ++a

> 对于原变量是没有区别的，都会立即给原变量增加1，所以如果输出的是原变量a，那么就是2
>
> 不同的是a++和++a的值（这两个表达式是不同的，所以表达式的值也是不同的）
>
> 分清输出的是表达式的值还是新值是判断计算结果的关键

##### a++的值还是1，还是自增前的值

##### ++a的值是2，是自增后的新值

```
var a = 1;
a++;
console.log("a++ = " + a++);
//	输出"a++ = 1"
```



```
var a = 1;
++a;
console.log("a = " + ++a);
//	输出"++a = 2"
```



```
var c =10;
c++;	//原变量为10，自增后新值为11，表达式值为10
console.log(c++);	//原变量为11，自增后值为12，但表达式的值为11
```



```
var a = 10;
++a;	//原变量为10，自增后新值为11
a++;	//原变量为11，自增后新值为12
++a;	//原变量为12，自增后新值为13
console.log("a++ = " + a++);	//原变量为13，自增后新值为14，但是表达式a++的值为13
console.log("++a = " + ++a);	//原变量为14，自增后新值为15，表达式++a值为15
```



```
var d = 20;
d = d++;
console.log("d = " + d);	//输出"d = 20"
```



#### 自减 a-- 和 --a

理解了自增后不难理解自减

### 19 逻辑运算符

```
！	//非
&&	//与
||	//或
```

#### 取反运算 ！

##### 对布尔值进行运算

```
var a = true;
a = !a;
console.log("a = " + a);
```

##### 对非布尔值进行运算（先转换为布尔值）

```
var a = 10;
a = !a;
console.log(typeof a);
console.log("a = " + a);
//输出为"a = false"
```

- Boolean类型的隐式转换（为任意的数据类型进行两次取反操作）

```
var a = 10;
a = !!a;
console.log(typeof a);
console.log("a = " + a);
//输出Boolean，"a = true"
```

#### 与运算 &&

> 只要有一个false就返回false
>
> 只有两个true才返回true
>
> 如果第一个是false那就不用再看

```
true && true == true;
true && false == false;
false && false == false;
```

#### 或运算 ||

> 只要有true就返回true

```
false || false == false;
true || false == true;
true || true == true;
```

### 21 赋值运算符

>  把符号右侧的值赋值给左侧的变量

```
=
a += 5	->>	a = a + 5
a -= 5	->>	a = a - 5
a *= 5	->>	a = a * 5
a /= 5	->>	a = a / 5
a %= 5	->>	a = a % 3
```

### 22 关系运算符

> 通过关系运算符可以比较两个值之间的大小关系，如果关系成立返回true，如果不成立则返回false
>
> 注意两个字符串比较可能出错的情况怎样解决

```
>
>=
<
<=
```

非数值之间的关系运算

> 对于非数值进行比较时，会将非数值转换为数值再比较
>
> 任何值和NaN比较结果都是false
>
> 如果符号两边的值都是字符串，不会将其转换为数值进行比较，而是会比较其unicode编码值

```
console.log("10" > 5)	//返回true，因为"10"转换为了10大于5为真
console.log("a" < 10);	//返回false，因为非数值"a"转换为了NaN
console.log("a" < "b");	//返回true
```

- 当比较运算符两边都是字符串时，比较的是字符串的字符编码，而且是一位一位顺着进行比较，所以"11111"和"115"比较是前者小于后者，因为比较到第三位的时候1小于5

```
console.log("1111" < "115");	//输出true
console.log("abc" > "bcd");	//输出false
console.log("bbc" > "bb");	//输出true
```

> 可以利用这个特点对英文进行排序，比较中文没有意义

- 怎样解决比较两个字符串型数据时比较结果可能出错的问题

```
var a = "1111115";
var b = "15648";
var result = a < b;	//我们想要的结果是false，但是输出true
var result = a < +b;	//这样"b"就转换为数值型15648了，再比较就会一个数值型一个非数值型，这样非数值型就会转换为数值型比较
```

### 24 相等运算符和不相等运算符

#### 相等运算符

> 当使用==来比较两个值时，如果两个值的类型不同，则会将值的类型进行转换再进行比较，具体转换成什么数据类型不确定，但是大部分是转换为数值

```
==
console.log(1 == 1);
console.log(1 == "1");	//输出true
console.log(true == "1");	//输出true
console.log(true == "hello")	//输出false
//将字符串和布尔值都转换为数值类型
console.log(null == 0);	//输出false
```

- undefined衍生自null，所以使用相等运算符时返回true

```
console.log(undefined == null);	//返回true
```

- NaN不和任何值相等，包括它本身

```
console.log(NaN == NaN);	//返回false
var a = NaN;
console.log(a == NaN);	//返回false
```

- 通过isNaN( )函数判断一个值是否是NaN

```
var a = NaN;
console.log(isNaN(a));	//返回true
```

#### 不相等运算符

> 不相等也会对数据进行类型转换

```
!=
console.log(10 != 5);
console.log("abc" != "abc");
console.log("1" != 1);
```

- 全等运算符===，和相等运算符相似，但是它不会转换数据类型，数据类型不同直接返回false

```
console.log(null === undefined)	//返回false
```

- 不全等运算符!==，和不相等运算符相似，但是不会转换数据类型，数据类型不同直接返回true

### 25 条件运算符

```
条件表达式?语句1:语句2;
条件为true执行语句1
条件为false执行语句2
```

```
true?alert("语句1"):alert("语句2");
false?alert("语句1"):alert("语句2");
```

```
var a = 10;
var b = 20;
a > b? alert("a大"):alert("b大");
```

- 获取a和b中的最大值

```
var max = a > b ? a : b; 
```

- 获取a和b和c中的最大值

```
var max = a > b ? a : b;
max = max > c ? max : c;
```

### 26 运算符的优先级

> 和数学中一样，在JS中也有运算符的优先级，先乘除后加减
>
> 优先级一样从左往右运算
>
> JS运算优先级表
>
> 使用括号改变运算的优先级

```
var result = 1 || 2 && 3;
```

```
var result = (1 || 2) && 3;
var result = 1 || (2 && 3);
```

