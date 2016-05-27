## 机器人项目组
#### 机器人项目组介绍

> * 机器人项目组于**2014**年由**林成坤**创立，相对于实验室其他三个项目组略显稚嫩，所面临的问题也比较多，而主要体现在术不成熟，开发平台不完善，对比飞行器与小车组，硬件平台明确且长期稳定，又有以前学长学姐的项目积累，而机器人组目前实际状况仍处于探索过程中，另外以目前实验室的资金状况，是不可能购置一个动则几十万的完备的机器人开发平台的，所以目前机器人组的主要硬件资源就是**机械臂**，第一代机械臂是用的由6个舵机组成的**六自由度机械臂**，控制器用的**stm32**，由于本身结构局限性，操控性不好，2015下旬我们又购置了结构更加科学合理的**Uarm机械臂**作为我们的第二代机械臂，控制器采用的是**Arduino**。所以，目前机器人项目组的硬件平台基本确定，接下来主要考虑往高层应用方向开发，比如图像识别，终端控制，算法研究等。  
> * 另外，我不想过多吹嘘我们项目组目前取得的成果，因为机器人项目组的项目进度一直处于走走停停的状态，不得不承认这是我们高层管理人员的问题，以前是我们在探索有什么好的并且合适我们的技术值得我们学习，所以对于低年级的成员也很无奈，没办法系统学习东西，但是现在整个项目组的知识架构差不多都已确定，我也尽量会给你们指定合适的学习计划，在本文档后面也有项目组整体目标，所以我希望现在开始每个项目组成员都应该要明确**自己是有东西可以学的，并且要学的东西还有很多**。  
> * 另外，我希望每个项目组成员都要明白加入机器人项目组的意义，如果你加入这个项目组学不到任何东西，是毫无意义而言的。你们都是项目组甚至实验室以后的希望，一定要有颗敢于挑战的心，就像林成坤创立机器人项目组一样，我希望你们以后也能在实验室的某些方面做第一个吃螃蟹的人，做敢于推翻学长学习新兴技术的人。

--------------

#### 项目组章程
> 1. 每个成员必须对本章程牢记于心，严格遵守。
> 2. 学习是快乐的，如果你现在做的事情让你毫无快乐，那就别做了！
> 3. 每个成员必须有自己的github帐号。
> 4. 实验室不是培训机构也不是社团，是一个学习交流平台，要想在实验室有存在感与话语权，请你对自己负责主动学习提升自己，我们不会吝啬给予帮助，更不会强迫你学习。
> 5. 如果发现项目组有任何的问题，作为项目组的一员你有义务负起你的责任及时向项目组高层人员提出建设性意见。
> 6. 项目组成员之间要互帮互助，相互学习，增强沟通。
> 7. 本项目组成立的宗旨是学习，每个学习目录下都有相应任务，完成任务的名单会公布在该任务页面上。
> 8. 不要觉得自己没学过，没人教就说不会，实验室的学长现在每天都在接触新东西，都是边学边用。
> 9. 记住第二条。

------------------

#### 项目学习方向

* 硬件平台：`arduino` `stm32` `rasberry pi`
* 系统平台：`linux` `Windows`
* 软件平台：`qt5` `ucos` `opencv`
* 编程语言：不限，必须学习`c`、`c++`，推荐学习`python`、`java`，其他语言不做要求。

------------------

#### 本git项目说明及目录架构
* 初衷

> * 机器人项目组在所有方面都不是特别成熟，无论是技术上还是人员管理上，特别是人员管理上一直没有找到有效的方法，所以导致整个项目组各个成员的学习进度无法掌控和交流，整个项目组的进度经常停滞，另外，更加严峻的问题是，目前本项目组的核心层仍停留在大三层，而大三层的人员马上面临考研、就业等一系列问题，所以急需低年级成员成为项目组骨干。  
> * 机器人项目组目前借鉴软件开发小组的学习管理方式，采用github这个版本控制平台对整个项目组的学习进行管理，本git项目由我长期维护，由于本人能力有限，没办法对本项目组涉及到的所有版块都做详细讲解，但是我会将每个版块划分目录，布置学习任务。  
> * **项目学习建议**：学习就像升级打怪，没事就刷刷任务，各个学习目录下面都有学习任务，大家的学习进度以完成的任务为标准。

* 目录架构

| 目录 | 解释 |
| ---- |------
| **base** |本目录是机器人项目涉及到的基础知识，所有项目组成员必须跟着学习任务走一遍。主要介绍arduino和stm32两个硬件平台的使用。
| **linux** |学习嵌入式不得不对linux操作系统有所了解，本目录会介绍常用的linux命令，工具，以及编程相关的知识。
| **qt5** |qt5是跨平台的图形库，采用c++开发，在项目中主要用于上位机软件开发。
| **OpenCv** |opencv是一个开源的计算机视觉库，主要实现了对机器视觉相关复杂算法的函数封装，早期使用c开发，目前主要采用c++开发，也有python、java接口。在项目中主要用于高层应用开发，图像识别等智能化。
| **ucos** |一个实时操作系统，常用于嵌入式设备，相对于裸机跑程序更加稳定。在项目中主要用于stm32硬件平台。

-------------------

#### 项目目标
* 长期目标

	我对机器人项目组的长期发展方向主要定位在**高层软件应用开发**方向，因为我们在底层硬件方面没有任何优势，使用别人优秀的硬件平台就好，而且更加重要的是，我觉得项目组成员如果把本项目涉及到的东西搞懂，在实验室各方面都会有自己的核心竞争力。另外，机器人项目组的原则还是人才培养，并且是综合能力培养，我对机器人组的未来展望是，项目组成员以后能在控制算法、机器视觉、智能硬件等方面有所突破。

* 短期目标

	近期我们主要需要考虑实现遥控手套控制机械臂，以及加上机器视觉应用。

------------------

#### 项目wiki

*	[项目wiki](../../wiki)

--------------------

#### 常用的资源链接

* uArm机械臂
	* uArm官网：[https://ufactory.cc](https://ufactory.cc/)
	* uArm开发者网站：[http://developer.ufactory.cc](http://developer.ufactory.cc/)
* Arduino
	* Arduino官网：[http://www.arduino.org](http://www.arduino.org/)
	* Arduino开发网站：[https://www.arduino.cc](https://www.arduino.cc/)
	* Arduino中文网站：[http://www.arduino.cn](http://www.arduino.cn/)
	* processing官网：[https://processing.org](https://processing.org/)
* Linux
	* ubuntu中文：[http://wiki.ubuntu.org.cn](http://wiki.ubuntu.org.cn/%E9%A6%96%E9%A1%B5)
	* linux源码：[https://www.kernel.org](https://www.kernel.org/)
	* 树莓派官网：[https://www.raspberrypi.org/](https://www.raspberrypi.org/)
	* 树莓派实验室：[http://shumeipai.nxez.com](http://shumeipai.nxez.com/)
	* 香蕉派官网：[http://forum.lemaker.org](http://forum.lemaker.org/)
* qt
	* qt官网：[http://www.qt.io](http://www.qt.io/)
	* qt学习之路：[http://www.devbean.net/category/qt-study-road-2](http://www.devbean.net/category/qt-study-road-2/)
* OpenCV
	* OpenCV官网    [http://opencv.org](http://opencv.org/)
	* OpenCV学习日文网站    [http://opencv.jp/cookbook/index.html](http://opencv.jp/cookbook/index.html#)
	* OpenCV中文论坛    [http://www.opencv.org.cn](http://www.opencv.org.cn/)
	* 毛星云博客-OpenCV教程     [http://blog.csdn.net/zhmxy555/article/category/1923021](http://blog.csdn.net/zhmxy555/article/category/1923021)
* 学习解惑
	*	github:[https://github.com](https://github.com/)
	* stackoverflow:[http://stackoverflow.com](http://stackoverflow.com/)
	* 维基百科：[https://www.wikipedia.org](https://www.wikipedia.org/)
	*	慕课网:[http://www.imooc.com](http://www.imooc.com/)
	* 牛客网：[http://www.nowcoder.com](http://www.nowcoder.com/)
	* 知乎：[https://www.zhihu.com](https://www.zhihu.com/)
	* 中国知网：[http://www.cnki.net](http://www.cnki.net/)
	* 菜鸟教程：[http://www.runoob.com](http://www.runoob.com/)
	* 廖学锋的官方网站：[http://www.liaoxuefeng.com](http://www.liaoxuefeng.com/)
	* 吴兴章的个人网站：[http://www.nephen.com](http://www.nephen.com/)
* 软件应用
	* 异次元软件世界：[http://www.iplaysoft.com](http://www.iplaysoft.com/)
	* sourceforge：[https://sourceforge.net](https://sourceforge.net/)
	* 流程图在线制作：[https://www.processon.com](https://www.processon.com/)
	* PPT在线制作：[http://www.ipresst.com](http://www.ipresst.com/)
* 创客硬件
	* 爱板网：[http://www.eeboard.com](http://www.eeboard.com/)
	* MakerBata：[http://www.makerbeta.com](http://www.makerbeta.com/)
	* 物联网云平台：[http://www.yeelink.net/](http://www.yeelink.net/)
	* 极客工坊：[http://www.geek-workshop.com](http://www.geek-workshop.com/forum.php)
	* 第9单片机开发网：[http://www.9mcu.com/9mcubbs/forum.php](http://www.9mcu.com/9mcubbs/forum.php)
	* 开源电子网：[http://www.openedv.com](http://www.openedv.com/)
	* ardupilot开源无人机：[http://ardupilot.org/ardupilot/index.html](http://ardupilot.org/ardupilot/index.html)
