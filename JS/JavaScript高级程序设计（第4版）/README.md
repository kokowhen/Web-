## 第三章 语言基础

### 3.3 变量

- 局部作用域下定义全局变量的方法：声明变量的时候去掉var

```javascript
function fun(){
	a = 10;
}
fun();
console.log(a);	// 可以访问到，调用一次函数就会生成一次全局变量a，但是不推荐这种方法去参加全局变量
```

- var声明提升：使用var关键字声明的变量会被自动提升到函数作用域顶部

```javascript
function fun(){
	console.log(a);
	var a = 20;
}
fun();	// 不会报错，输出的是undefined
// 等效为该代码
function fun(){
    var a;
	console.log(a);
	a = 20;
}
fun();	// 不会报错，输出的是undefined
```

- let关键字声明变量和var关键字声明变量的区别
  - let是在块级作用域声明变量
  - let声明的变量不会成为window对象的属性

- const关键字声明变量
  - 变量的值不可以修改
  - 如果是声明变量，那么对象的属性值可以修改

- 好的代码规范是使用const和let关键字声明变量

#### 3.4.4 Boolean数据类型

- 其他数据类型的转换为Boolean数据类型对应的值

![](http://my-picture.qiniu.notyourjeffery.top/image-20211020144727371.png)

#### 3.4.5 Number数据类型

- NaN
  - 任何涉及NaN的运算结果都是NaN
  - NaN == NaN 返回是false
  - isNaN( )函数，判断传入的参数是否是“不是数值”
- 数值转换的三种方法，将非Number的数据类型转换为Number数据类型：Number( )、parseInt( )、parseFloat( )	
  - Number( )方法

```javascript
var a = "hello";	// 一般数值字符串返回NaN
var b = "220";	// 数值字符串返回220
var c = "";	// 空字符串返回0
var d = true;
var e = false;
var f = undefined;	// 返回NaN
```

- parseInt( )：专用于传入并判断一般非数值字符串，可以传入第2个参数

```javascript
var a = "123";	// 返回123
var b = "";	// 返回NaN
var c = "12345bhh";	// 返回12345
```

#### 3.4.6 String数据类型

- 字符转换的方法：toString( )、String( )
  - toString( )：不接收参数，null和undefined没有toString( )方法

```javascript
var a = 11;
var b = null;	// 报错
var c = undefined;	// 报错
var d = true;
```

- String( )方法：传入参数

```javascript
var a = 11;
var b = null;	// 返回null
var c = undefined;	// 报错undefined
var d = true;
```

