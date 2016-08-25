//
//  ASBirthSelectSheet.h
//  ASBirthSheet
//
//  Created by 窦心东 on 15/12/8.
//  Copyright © 2015年 窦心东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASBirthSelectSheet : UIActionSheet
@property (nonatomic, copy) void(^GetSelectDate)(NSString *dateStr);
@property (nonatomic, strong) NSString * selectDate;
@end
