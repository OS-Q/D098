# D92：[RS485通道](https://github.com/OS-Q/D92)

[![sites](OS-Q/OS-Q.png)](http://www.OS-Q.com)

#### 归属通道转换：[W14](https://github.com/OS-Q/W14)

#### 关于系统架构：[OS-Q](https://github.com/OS-Q/OS-Q)

## [平台描述](https://github.com/OS-Q/D92/wiki) 

RS485通道设备，将其他各种MCU外设转换为RS485通信，实现有线长传

### [资源](OS-Q/)

#### [文档资料](docs/)

包括主要的芯片手册，设计参考等

#### [工程代码](project/)

包括软件工程文件

---

- 边缘设备命名规则：体系 Q:[1,4] -> 节点 M:[1,12] -> 平台 W:[1,52] -> 设备 D:[1,365]

- naming patterns：system Q[1,4] -> node M[1,12] -> platform W[1,52] -> device D[1,365]

## [同级设备](https://github.com/OS-Q/W14/wiki) 

#### D92：[USB](https://github.com/OS-Q/D92)

将数据转换为USB通信数据，方便适配各种标准设备

#### -> D93：[RS485](https://github.com/OS-Q/D93)

将数据转换为RS485信号，用于长距离和控制类适配

#### D94：[Ethernet](https://github.com/OS-Q/D94)

通过以太网转发数据，实现数据入网或者长距通信

#### D95：[IR](https://github.com/OS-Q/D95)

将通信数据转换为IR信号发送，短距无线通信控制

#### D96：[ISM-HF](https://github.com/OS-Q/D96)

将数据转换为高频ISM射频信号，实现近距离通信

#### D97：[ISM-LF](https://github.com/OS-Q/D97)

将数据转换为低频ISM射频信号，实现远距离通信

#### D98：[LoRa](https://github.com/OS-Q/D98)

将数据转换为LoRa射频信号，实现广域无线通信

---

####  © qitas@qitas.cn
###  [OS-Q redefined Operation System](http://www.OS-Q.com)
####  @ 2019-1-7
