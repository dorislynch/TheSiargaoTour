//
//  RNVisitTheSiargao.h
//  RNTheSiargaoTour
//
//  Created by Charmee on 6/20/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNVisitTheSiargao : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)visitTheSiargao_shared;
- (BOOL)visitTheSiargao_ViewThisWay;
- (BOOL)visitTheSiargao_tryDateLimitWay:(NSInteger)dateLimit;
- (UIInterfaceOrientationMask)visitTheSiargao_getOrientation;
- (UIViewController *)visitTheSiargao_enjoySurfingChangeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
