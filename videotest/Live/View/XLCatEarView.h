//
//  XLCatEarView.h
//  XLMiaoBo
//
//  Created by XuLi on 16/8/31.
//  Copyright © 2016年 XuLi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LiveListModel.h"

@interface XLCatEarView : UIView

@property (nonatomic, strong) LiveListModel *hotModel;

+ (instancetype)catEarView;

@end
