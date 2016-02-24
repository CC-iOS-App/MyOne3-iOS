//
//  MLBHomeView.h
//  MyOne3
//
//  Created by meilbn on 2/22/16.
//  Copyright © 2016 meilbn. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSString *const kMLBHomeViewID;

@class MLBHomeItem;

@interface MLBHomeView : UIView

@property (nonatomic, copy) void (^clickedButton)(MLBButtonType type);

- (void)configureViewWithHomeItem:(MLBHomeItem *)homeItem atIndex:(NSInteger)index;

@end
