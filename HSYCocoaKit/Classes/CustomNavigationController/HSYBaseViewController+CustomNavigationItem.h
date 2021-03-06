//
//  HSYBaseViewController+CustomNavigationItem.h
//  Pods
//
//  Created by huangsongyao on 2018/4/8.
//
//

#import "HSYBaseViewController.h"

@interface HSYBaseViewController (CustomNavigationItem)

/**
 快速创建左部分的导航栏按钮----图片类型
 
 @param images 图片内容，格式为：@{@(导航栏枚举类型--kHSYCustomBarButtonItemTag) : @"图片名称")}
 @param next 按钮点击事件
 */
- (void)hsy_leftItemsImages:(NSArray<NSDictionary *> *)images
              subscribeNext:(void(^)(UIButton *button, kHSYCustomBarButtonItemTag tag))next;

/**
 快速创建右部分的导航栏按钮----图片类型
 
 @param images 图片内容，格式为@{@(导航栏枚举类型--kHSYCustomBarButtonItemTag) : @"图片名称")}
 @param next 按钮点击事件
 */
- (void)hsy_rightItemsImages:(NSArray<NSDictionary *> *)images
               subscribeNext:(void(^)(UIButton *button, kHSYCustomBarButtonItemTag tag))next;

/**
 快速创建左部分的导航栏按钮----文字类型
 
 @param titles title内容，格式为：@{@(导航栏枚举类型--kHSYCustomBarButtonItemTag) : @"title内容"}
 @param next 按钮点击事件
 */
- (void)hsy_leftItemsTitles:(NSArray<NSDictionary *> *)titles
              subscribeNext:(void(^)(UIButton *button, kHSYCustomBarButtonItemTag tag))next;

/**
 快速创建右部分的导航栏按钮----文字类型
 
 @param titles title内容，格式为：@{@(导航栏枚举类型--kHSYCustomBarButtonItemTag) : @"title内容"}
 @param next 按钮点击事件
 */
- (void)hsy_rightItemsTitles:(NSArray<NSDictionary *> *)titles
               subscribeNext:(void(^)(UIButton *button, kHSYCustomBarButtonItemTag tag))next;



@end
