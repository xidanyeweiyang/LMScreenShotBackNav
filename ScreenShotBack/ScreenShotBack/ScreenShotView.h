//
//  ScreenShotView.h
//  ScreenShotBack
//
//  Created by 刘明 on 16/5/10.
//  Copyright © 2016年 刘明. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScreenShotView : UIView
@property (nonatomic, strong) UIImageView *imgView;
@property (nonatomic, strong) UIView *maskView;
@property (nonatomic, strong) NSMutableArray *arrayImage;

- (void)showEffectChange:(CGPoint)pt;
- (void)restore;
- (void)screenShot;
@end
