//
//  ItemStore.h
//  Homepwner
//
//  Created by WangKai on 15/6/25.
//  Copyright (c) 2015年 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Item;

@interface ItemStore : NSObject

// Notice that this is a class method and prefixed with a + instead of a -
+ (instancetype)sharedStore;

@property (nonatomic, readonly, copy) NSArray *allItems;

- (Item *)createItem;
- (void)removeItem:(Item *)item;
- (void)moveItemAtIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex;
- (BOOL)saveChanges;
- (NSArray *)allAssetTypes;

@end
