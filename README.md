# WDUSBClient(only support iOS9+, iOS10+)
Now, the framework only works on usb connection, so simulator doesn't support(只支持真机设备)
- 该框架主要是用来实现iOS真机的UI自动化.
- 也可用来实现例如按键精灵的一些小程序.

##Features
- 更加快速的通信效率, 直接使用socket通信, 而非http.
- 无需担心设备没有连接上wifi等影响.物理层走的是USB数据线.
- 基于facebook的WebDriverAgent驱动进行开发.
- 基于OC语言, 可供广大iOS开发者方便的实现自动化UI, 提供App稳定性.
- 支持多机并发测试。
- 非侵入式框架, 无需在项目中嵌入

##Update
- 新添加微信自动发消息范例

## 交流QQ群
`QQ群: 114577285`

# 相关连接(必看)
- API(接口文档): https://github.com/sixleaves/WDUSBClient/wiki
- Classes(关键类属性介绍): https://github.com/sixleaves/WDUSBClient/wiki/Classes
- WD地址(建议用我的, 我会和facebook那边的框架保持同步, 并会添加新功能, 修复bug):https://github.com/sixleaves/WebDriverAgent

#将Client文件夹下的东西都拖到你的工程中。引入主头文件
`#import "WDClient.h"`

#Create Client(创建客户端)
```
NSString *udid = @"a49bcbd6a9d3b24b8f70b8adde348925a5bfac6e";
FBHTTPOverUSBClient *client = [[WDClient alloc] initWithDeviceUDID: udid];
```
#Start A App on real device(在真机上运行)
###first set the bundle id(先设置bundle id)
`[client setBundleID: @"com.nd.www.TestAppForIOS"]`
###next step, call startApp method(下一步, 调用startApp方法)
`[client startApp]`

# 安装参考
## 前提

目前支持iOS9, iOS10, 支持真机国行, 港版, 美版设备.  下面介绍一下具体的安装流程。希望有相应的问题, 给我提交issue, 尽量完善这个框架.

首先要注意两点

- 到我的github上clone下WDUSBClient这是基于WD的客户端.
- 到我的github上下载WebDriverAgent, 为什么不去Facebook官网下载呢?因为我提的一些代码还没有合并到他们那边.你下载facebook那边的驱动就可能会导致不能安装.(我会时时的和FB保持同步)

## 准备

##### 下载WDUSBClient

https://github.com/sixleaves/WDUSBClient

##### 下载WebDriverAgent

https://github.com/sixleaves/WebDriverAgent



## 配置

配置WebDriverAgent(请到我的github上下载)

###### step 1 打开工程, 配置证书

我们需要为以下这几个TATGETS地方配置证书。如下图

 ![Snip20161021_2](https://raw.githubusercontent.com/sixleaves/WDUSBClient/master/screenshots/Snip20161021_2.png)

以WebDriverAgentLib证书配置为例子.

先选中WebDriverAgentLib. 然后选General选项卡。再选择Signing下面的Team, 选择你在苹果注册的帐号名称.如下图。

 ![Snip20161021_3](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_3.png)



而WebDriverAgentRunner的配置则比较特殊.需要选择Build Settings选项卡。

- 输入pack，如图，修改Product Bundle identifier。

   ![Snip20161021_4](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_4.png)



- 输入sig, 如图将Code Signing Identity全都修改为iOS Developer。Development Team修改为你对应的帐号。

   ![Snip20161021_5](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_5.png)

其它几个签名配置，差不多给以按照上面两种配置。大家依葫芦画瓢即可。

## 安装

#### 安装WebDriverAgent到真机上

- 需要你先获取手机的udid。
- WebDriverAgent的项目根目录。

如后将下面命令粘贴到终端, 并回车运行

```objective-c
xcodebuild -project /Users/admini/WebDriverAgent/WebDriverAgent.xcodeproj \
           -scheme WebDriverAgentRunner \
           -destination 'platform=iOS,id=a49bcbd6a9d3b24b8f70b8adde348925a5bfac6e' \
           test
```

把project后面那一串路径换成你的路径。id后面的值替换成你的udid。



#### 安装WDUSBClient.

这是要重点介绍的, 为了让大家直观的看到效果。需要先将我工程里的demo跑到手机上。再运行WDUSBClient客户端。步骤如下

##### 安装测试程序

###### Step1. 选择TestAppForIOS 2那个选项, 并选择对应真机

 ![Snip20161021_7](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_7.png)



###### step2. 选择对应的签名证书
![Snip20161021_9](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_9.png)



###### step3.编译到手机

直接使用快捷键 CMD + R就可以进行编译。



##### 安装WDUSBClient

###### step1. 先选中WDUSBClient这个scheme

 ![Snip20161021_10](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_10.png)





###### step2. 修改ViewContronller中的测试代码.提供UDID和对应的BundleID 
![Snip20161021_11](https://github.com/sixleaves/WDUSBClient/blob/master/screenshots/Snip20161021_11.png)



###### step3.直接编译到mac

编译到mac后就会启动WDUSBClient, 会自动启动手机上的测试程序。


# 后续

先提供一个可以玩的版本给大家.很想把这东西做到完美。现在工程内还有很多需要重构的代码。后续会继续提供以下功能, 更多相关功能欢迎提供建议, 我们会综合考虑尽量加进去。
- monkey测试.
- 自动化的编译程序.(屏蔽WD驱动程序的编译安装)


##更多的用处等待你的探索!!!


