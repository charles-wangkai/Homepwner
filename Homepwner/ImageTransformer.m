//
//  ImageTransformer.m
//  Homepwner
//
//  Created by WangKai on 10/11/15.
//  Copyright © 2015 Big Nerd Ranch. All rights reserved.
//

#import "ImageTransformer.h"
#import "UIKit/UIKit.h"

@implementation ImageTransformer

+ (Class)transformedValueClass {
    return [NSData class];
}

- (id)transformedValue:(id)value {
    if (!value) {
        return nil;
    }
    
    if ([value isKindOfClass:[NSData class]]) {
        return value;
    }
    
    return UIImagePNGRepresentation(value);
}

- (id)reverseTransformedValue:(id)value {
    return [UIImage imageWithData:value];
}

@end
