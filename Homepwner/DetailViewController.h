//
//  DetailViewController.h
//  Homepwner
//
//  Created by WangKai on 15/7/5.
//  Copyright (c) 2015年 Big Nerd Ranch. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Item;

@interface DetailViewController : UIViewController <UIViewControllerRestoration>

- (instancetype)initForNewItem:(BOOL)isNew;

@property (nonatomic, strong) Item *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

@end
