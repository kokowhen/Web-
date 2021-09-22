# Web开发学习

## HTML（超文本标记语言）

> 决定网页的结构

> [HTML参考手册]:"https://developer.mozilla.org/zh-CN/docs/Web/HTML/Reference"

> [HTML学习链接]:"https://developer.mozilla.org/zh-CN/docs/learn/HTML"

### 一、HTML介绍

> https://developer.mozilla.org/zh-CN/docs/Learn/HTML/Introduction_to_HTML

一个HTML元素包含哪些部分：

- 元素：单一元素、元素的嵌套，块级元素和内联元素，空元素
- 标签：开始标签和结束标签
- 内容

### 二、<head>标签里有什么

> 学习 HTML <head> 标签的概念、用途、基本组成，以及它对 HTML 文档所起的作用

#### 1.head元素的作用

- 包含了网页的一些信息例如页面的标题
- 页面的样式
- 元数据：作者信息，文档描述等

h1添加文档body元素内容的标题，title添加整个HTML文档的标题

![image-20210922204345996](C:\Users\sjy\AppData\Roaming\Typora\typora-user-images\image-20210922204345996.png)

#### 2.元数据

<meta>元素的用途

- 规定文档字符编码

  - `utf-8` 是一个通用的字符集，它包含了任何人类语言中的大部分的字符。 意味着该 web 页面可以显示任意的语言；所以对于你的每一个页面都使用这个设置会是一个好主意！比如说，你的页面可以很好的处理中文和藏文

  - `GBK` （中国大陆国标字符集）

**应该为页面手动设置编码为`utf-8`，来避免在其他浏览器中可能出现的潜在问题**

#### 3.添加作者和描述

<meta name="xxx" content="xxx">

- `name` 指定了meta 元素的类型； 说明该元素包含了什么类型的信息

- `content` 指定了实际的元数据内容

#### 4.为自己的站点添加自定义图标

<link href="">

#### 5.在HTML中应用CSS和JavaScript

- <link>元素链接CSS样式

  - 位置：经常位于文档的头部
  - <link rel="stylesheet" href="CSS文件路径">

- <script>元素链接JavaScript文件

  - 位置：经常位于文档的尾部，</body>之前

  - <script src="JS文件路径"></script>

### 三、HTML文字处理基础

> 学习如何用标记(段落、标题、列表、强调、引用)来建立基础文本页面的文本结构和文本内容

#### 1.标题和段落

每个页面最好只是使用一次<h1>标签

#### 2.三种不同类型的列表

- 无序列表
  - ul+li

- 有序列表
  - ol+li

- 嵌入式列表

#### 3.重点强调

- 斜体：em标签
- 加粗：strong标签

如果没有更合适的元素，那么使用 `<b>`、`<i>` 或 `<u>` 来表达传统上的粗体、斜体或下划线表达的意思是合适的



































































## CSS

> 决定网页的表现与展示效果，给网页“美颜”



## JavaScript

> 决定网页的动态功能，让静态网页动起来

