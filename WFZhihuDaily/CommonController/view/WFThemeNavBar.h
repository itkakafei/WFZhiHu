//
//  WFThemeNavBar.h
//  WFZhihuDaily
//
//  Created by wfh on 16/1/29.
//  Copyright © 2016年 xiupintech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FXBlurView.h"
@interface WFThemeNavBar : UIImageView

@property (nonatomic, strong) FXBlurView *blurView;

/**
 *  添加下拉表头的动画
 *
 *  @param offset 便宜量
 *
 */
- (void)wf_parallaxHeaderViewWithOffset:(CGFloat)offset;

@end
