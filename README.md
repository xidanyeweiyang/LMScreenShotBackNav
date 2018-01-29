# LMScreenShotBack
截图手势返回，景深效果，对于每个VC都可以关闭或者打开手势返回，一个属性搞定。
---

---
```Objective-C
    yourVC.enablePanGesture =  YES;（打开返回手势）默认为YES
    yourVC.enablePanGesture =   NO; （关闭返回手势）
    
    
     @interface BaseViewController : UIViewController
     @property (nonatomic, assign) BOOL enablePanGesture;//是否支持拖动pop手势，默认yes,支持手势

     @end
     
     
     @implementation BaseNavigationController

    这里可以改变触发的距离值
    // 打开边界多少距离才触发pop
    #define DISTANCE_TO_POP 80
```



