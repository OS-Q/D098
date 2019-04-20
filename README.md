﻿# [RS485转换](https://github.com/OS-Q/D93)
[![sites](OS-Q/OS-Q.png)](http://www.OS-Q.com)
#### 归属接口转换：[W14](https://github.com/OS-Q/W14)
#### 关于系统架构：[OS-Q](https://github.com/OS-Q/OS-Q)
Edge-Q -> 体系 Q[1,4] -> 节点 M[1,12] -> 平台 W[1,52] -> 设备 D[1,365]
### [设备描述](https://github.com/OS-Q/D93/wiki) 

由于RS-232接口标现较早，有以下四点不足：

* （1） 接口信号电平值较高，易损坏接口电路的芯片，和TTL有不同。 
* （2） 传输速率较低，异步传输时波特率为20Kbps。 
* （3） 接口使用一根信号线和一根信号返回线而构成共地的传输形式， 容易产生共模干扰抗噪声干扰性弱。 
* （4） 最大传输距离标准值为50英尺，实际上也只能用在50米左右。 

RS-485特性：

* 逻辑“1”以两线间的电压差为+（2—6）V表示
* 逻辑“0”以两线间的电压差为-（2—6）V表示

RS-485优势：

* 电平与TTL电平兼容，可方便与TTL电路连接
* RS-485的数据最高传输速率为10Mbps 
* RS-485接口是采用平衡驱动器和差分接收器的组合，抗共模干能力增强。 
* RS-485接口在总线上是允许连接多达128个收发器。

转换芯片：

- [32节点：SN75176](docs/)
- [64节点：SN75LBC184](docs/)
- [128节点：MAX487](docs/)
- [256节点：MAX1482](docs/)

### [设备资源](https://github.com/OS-Q/D93) 

- [资源](src/)
- [文档](docs/)
- [工程](project/)


### [OS-Q : Operation System for edge devices](http://www.OS-Q.com/Edge/D93)
####  2019-4-21  