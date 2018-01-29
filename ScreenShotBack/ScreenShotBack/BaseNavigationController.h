//
//  BaseNavigationController.h
//  ScreenShotBack
//
//  Created by 刘明 on 16/5/10.
//  Copyright © 2016年 刘明. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseNavigationController : UINavigationController
@property (strong ,nonatomic) NSMutableArray *arrayScreenshot;
#if kUseScreenShotGesture
@property (nonatomic, strong) UIPanGestureRecognizer *panGesture;
#endif
@end
