## PureMVC_QT 项目说明

#### 项目描述
  基于 QTCreator 的 PureMVC 框架代码(包含demo)，移植于该框架的 C++ 版本

#### 项目结构
   文件和路径 | 功能
   -----------|-----------
   src\ | 源码文件
  
#### 详细描述
  1. 该框架基于经典的Model-View-Controller三层框架思想，由
  Model-View-Controller构成其核心，并以Facade模式加以封装，以单例门面的形式
  对外提供核心服务，如Proxy操作，Command操作以及Mediator操作，他们均由Facade
  单例统一进行调度。
  2. 客户端初始化时须对Mediator，Command，Proxy进行注册，以表明各自感兴趣的
  消息（观察者模式中的订阅）。用户输入数据到View Components后，由Mediator
  通知观察者Command数据更新（观察者模式中的发布），Command调用Proxy完成真正
  的业务逻辑操作，完成后通知感兴趣的观察者Mediator（观察者模式中的发布）将
  数据更新到View Components，完成整个数据流动处理过程。
  3. 该框架大量用到了设计模式，包括：
     1. 观察者模式：观察者模式是整个框架所使用的核心模式，其发布-订阅的机制
     奠定了整个框架解耦的基础。
     2. 门面模式：对Model-View-Controller核心组件复杂的功能进行封装，以统一
     的门面形式对外提供服务，简化了调用者的复杂度。
     3. 中介者模式：隔离UI组件和其他框架组件，由中介者来统一完成UI组件与框
     架组件的交互，使UI组件与框架松耦合。
     4. 单例模式：对Model，View，Controller和Facade均只提供全局唯一的实例，
     调用者只需调用统一接口即可。
     5. 代理模式：Proxy对业务处理和数据访问提供了隔离控制，可以灵活地制定业
     务逻辑之外的操作。
     6. 命令模式：Command使用统一的execute命令和INotification通知来隔离命令
     调用者和命令执行者。

