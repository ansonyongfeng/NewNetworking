//
//  ViewController.h
//  NewNetworking
//
//  Created by Yongfeng on 06.12.13.
//  Copyright (c) 2013 Yongfeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *textField;

- (IBAction)loginButtonPressed:(id)sender;
- (IBAction)likeButtonPressed:(id)sender;

@end
