//
//  UIImage+MultiFormat.h
//  SDWebImage
//
//  Created by Olivier Poitrey on 07/06/13.
//  Copyright (c) 2013 Dailymotion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MultiFormat)

+ (UIImage *)sd_imageWithData:(NSData *)data;
// 添加方法前缀，解决与广点通sdk冲突导致的gif不动的情况
+ (UIImage *)letv_sd_imageWithData:(NSData *)data;

@end
