//
//  AppDelegate.h
//  NewNetworking
//
//  Created by Yongfeng on 06.12.13.
//  Copyright (c) 2013 Yongfeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) FBSession *session;

@end
