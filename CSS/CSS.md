## CSS样式参考文档

https://www.runoob.com/cssref/css-reference.html

内联样式：在body元素中设置

内联样式表：在文档头文件中设置

外部样式表：外部调用CSS样式

三者的优先级是从高到低

## CSS层叠与继承

应用CSS的原则

- 重要程度
- 优先级原则
  - 内联样式style
  - ID选择器
  - 类选择器、属性选择器
  - 元素选择器
  - ！important可以覆盖掉前面的所有选择器的优先级
- 资源顺序(最后设置的样式会先用)

控制继承的方法

- inherit
- initial
- unset
  - 重置所有样式

## CSS选择器

### 基本选择器

- 通用选择器
- 元素选择器
- 类选择器
- ID选择器

#### 通用选择器

会覆盖整个文档的内容，覆盖范围**很广**

```
*{
}
```

#### 元素选择器

```
h1{
}
span{
}

```

#### 类选择器

```
.类名{
}
class="类名"
```

#### ID选择器

> ID选择器定位到的元素是唯一的，根据ID名称去匹配

```
#ID名称{
}
id="ID名"
```

### 复合选择器

> 两个或多个基本选择器组合而成，**为了完成更精确的定位**

- 交集选择器

- 并集选择器
- 后代选择器
- 子元素选择器
- 相邻选择器

#### 交集选择器

> 元素选择器器和类选择器或者ID选择器搭配，精确定位

```
元素名.类/ID名{
}
```

#### 并集选择器(分组选择器)

> 两个或两个以上任意基础选择器组成，特点是样式对参与设置的选择器都有效，目的是把具有相同样式的不同选择器放在一起进行定义，简化CSS的代码量

```
选择器1，选择器2，选择器3，...{
}
```

#### 后代选择器(包含选择器)

> 用于选择**包含在指定选择器匹配的元素中的所有后代元素**，为了精确定位

```
选择器1 选择器2 选择器3 {
}
```

#### 子元素选择器

> 用于选择**包含在指定选择器匹配的元素中的直接子元素**，例如选择器body可以匹配p但是不能匹配span

```
选择器1 > 选择器2{
}
```

#### 相邻兄弟选择器

> 如果需要选择紧接在某个元素后面的元素，而且两者具有共同的父元素

```
选择器1 + 选择器2{
}
```

#### 通用兄弟选择器

> 相对于相邻兄弟选择器，不用紧挨着，只需要在同一层级下

```
选择器1 ~ 选择器2{
}
```

### 伪选择器

- 伪元素选择器
- 伪类选择器
- 结构伪类选择器

#### 伪元素选择器

> 假装那儿有一个元素，我们去选择它

乱数假文lorem

```
::first-line选择器
::first-letter选择器
::selection选择器
```

#### 伪类选择器

##### 动态伪类选择器

```
a:link{
}
a:visited{
}
a:hover{
}
a:active{
}
div:hover{
}
div:active{
}//鼠标点击就会触发
input类选择器/ID选择器:focus{
}
```

##### UI伪类选择器

```
:enabled选择器
:disabled选择器
:checked选择器
:required选择器
:optional选择器
:default选择器
input:valid选择器
input:invalid选择器
:in-range选择器
:out-of-range选择器
:read-only选择器
:read-write选择器
```

###### :enabled选择器和disabled选择器

![](picture.assets\Snipaste_2021-10-01_19-53-12.png)

###### :checked选择器

> :checked选择器适用于单选框、复选框和下拉列表中的选项，但点击其中的选项后，会根据:checked选择器的设置样式进行展示

![](picture.assets\Snipaste_2021-10-01_20-12-28.png)

###### :required选择器和optional选择器

> HTML的form表单里的元素默认是optional的

![](picture.assets\Snipaste_2021-10-01_20-50-42.png)

###### :default选择器

> 定位form表单中默认的元素，比如button元素

![](picture.assets\Snipaste_2021-10-01_20-59-17.png)

###### :valid选择器和invalid选择器

![](picture.assets\invalid和valid选择器的使用.gif)

###### :in-range选择器和:out-of-range选择器

> form表单里的input元素可以设置number属性，通过设置数字的输入范围，利用in-range选择器和:out-of-range选择器设置样式

![](picture.assets\range的两个选择器.gif)

###### :read-only选择器和:read-write选择器

![](picture.assets\Snipaste_2021-10-01_21-38-44.png)

##### 结构伪类选择器

- :root根选择器
- :empty空选择器
- :first-child选择器
- :only-child选择器

###### :root选择器

不常用

###### :empty选择器

元素是空时设置样式的选择器，如果要显示需要设置宽度和高度和背景颜色

###### :first-child选择器

默认时定位到每个父元素下的**第一个子元素**进行设置

例如：p: first-child定位到p元素作为某个元素的第一子元素那里；

span: first-child定位到span元素作为某个元素的第一个子元素那里

![](picture.assets\Snipaste_2021-10-02_10-14-47.png)

###### :last-child选择器

默认时定位到每个父元素下的**倒数第一个子元素**进行设置

例如：p: last-child定位到p元素作为某个元素的倒数第一子元素那里；

span: last-child定位到span元素作为某个元素的倒数第一个子元素那里

###### :only-child选择器

默认时定位到每个父元素下**只有一个子元素**那里进行设置

例如：p: only-child定位到**只有一个p子元素**的那里进行设置

###### :nth-first-child(n)选择器

> 指哪打哪，定位到正数第n个子元素

###### :nth-last-child(n)选择器

> 定位到倒数第n个子元素

###### :target选择器

> 在页面内加入锚点，点击之后进行跳转，需要搭配ID属性进行设置

页面跳转之后才会显示CSS设置的样式

![](picture.assets\target选择器.gif)

##### 伪类选择器和伪元素选择器的区别

- 伪类选择器用于当已有元素处于的某个状态时，为其添加样式

- 伪元素选择器用于创建一些不在文档树的元素，为其添加样式

  例如：**为p元素添加样式**

  方法一：类选择器法

```
html文档中：
<p class="类名">wwwwwwwwwwww</p>
CSS文档中：
.类名{
	设置的样式
}
```

​	  方法二：伪类选择器法

```
html文档中：
<P>wwwwwwwwwww</p>
CSS文档中：
:first-of-type{
	设置的样式
}
```

- 有必要去看一些大型网页的源码，看看人家的设计规范和原则

### 属性选择器

> 很实用，定位的规则很方便

![](picture.assets\Snipaste_2021-10-02_11-09-23.png)

![](picture.assets\Snipaste_2021-10-02_11-10-07.png)

### 颜色

颜色设置的几种方式

- 颜色的名称
- 颜色的16进制值
- RGB颜色设置
- RGBA颜色设置
- HEX颜色设置
- HSL颜色设置
- HSLA颜色设置

#### 前景色(color)

#### 背景色(background-color)和背景图片(background-image :url())

> 当同时使用背景颜色和背景图像的时候，图像会覆盖颜色

- 使用background-repeat属性，保证背景图像不被重复使用

- 使用background-position属性调整背景图片的位置

#### 背景设置

- 背景图像的大小设置：background-size

- 鼠标滚动文字的，设置背景图像的效果：background-attachment

- 背景属性简写

